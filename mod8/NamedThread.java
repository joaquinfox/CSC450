public class NamedThread extends Thread {
    private String name;

    public NamedThread(String name) {
        this.name = name;
    }

    public void run() {
        System.out.println("Hanga banga doodle, " + name);
    }

    public static void main(String args[]) {
        NamedThread greetings = new NamedThread("Fred");
        greetings.start();
        System.out.println("Thread started:");

    }

}