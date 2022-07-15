public class threadDemo extends Thread {
    private String name;

    public threadDemo(String name) {
    this.name = name;
    }

    public void run() {
    System.out.println("Hanga banga doodles");
    }

    public static void main(String args[]) {
        // int cores = Runtime.getRuntime().availableProcessors();
        // System.out.println(cores);
        threadDemo[] worker = new threadDemo[8];
        long startTime = System.currentTimeMillis();
        for (int i = 0; i < 8; i++) {
            worker[i] = new threadDemo("foo");
            worker[i].start();
        }
        for (int i = 0; i < 8; i++) {
            try {
                worker[i].join(); // Wait until worker[i] finishes, if it hasn't already.
            } catch (InterruptedException e) {
            }
        }
        // At this point, all the worker threads have terminated.
        long elapsedTime = System.currentTimeMillis() - startTime;
        System.out.println("Total elapsed time: " + (elapsedTime / 1000.0) + " seconds");
    }
}