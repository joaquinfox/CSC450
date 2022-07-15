/**https://www.geeksforgeeks.org/garbage-collection-java/ */
public class UseEmployee2 {
    public static void main(String[] args) {
        Employee2 E = new Employee2("GFG1", 56);
        Employee2 F = new Employee2("GFG2", 45);
        Employee2 G = new Employee2("GFG3", 25);
        // E.show();
        // F.show();
        // G.show();
        E.showNextId();
        F.showNextId();
        G.showNextId();

        {
            // It is sub block to keep
            // all those interns.
            Employee2 X = new Employee2("GFG4", 23);
            Employee2 Y = new Employee2("GFG5", 21);
            // X.show();
            // Y.show();
            X.showNextId();
            Y.showNextId();
            X = Y = null;
            System.gc();
            System.runFinalization();
        }
        E.showNextId();
    }
}
