public class NamedRunnable implements Runnable {
    private String name;

    public NamedRunnable(String name) {
        this.name = name;
    }

    public void run() {
        System.out.println("Greetings from runnable. " + name);
    }

    public static void main(String args[]) {
        NamedRunnable ronnie = new NamedRunnable("ronnie");
        Thread greetingThread = new Thread(ronnie);
        // Thread greetingThread = new Thread((ronnie) -> System.out.println("Greeting from jfkafjd"));

        greetingThread.start();
    }
}