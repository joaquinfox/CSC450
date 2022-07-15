public class test extends Thread {
    private String name;

    public test(String name) {
    this.name = name;
    }

    public void run() {
    System.out.println("Hanga banga doodles");
    }

    public static void main(String args[]) {
        // int cores = Runtime.getRuntime().availableProcessors();
        // System.out.println(cores);

        System.out.print("Running the thread ");
        test thrd = new test("A");
        thrd.start();
        while (thrd.isAlive()) {
            try {
                thrd.join(2000);
                System.out.print(".");
            } catch (InterruptedException e) {
            }
        }
        System.out.println(" Done!");

    }
}