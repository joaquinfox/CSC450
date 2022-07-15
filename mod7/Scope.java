import javax.swing.plaf.basic.BasicInternalFrameTitlePane.SystemMenuBar;

public class Scope {
    static int x;

    public static void main(String[] args) {
        x = 1;
        System.out.println(x);
        doSomethiing();
    }

    static void doSomethiing() {
        x = 10;
        System.out.println(x);
    }

    static void somethingElse() {
        int y = 100;
    }

}
