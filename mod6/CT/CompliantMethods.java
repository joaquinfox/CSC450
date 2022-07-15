
//Java program demonstrating BufferedReader methods
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/**
 * Class to demonstrate security compliant I/O methods in Java
 * Assertion: a file, "file.txt" exists.
 */
class CompliantMethods {
    public static void main(String[] args) {
        try {

            method01();
            method02();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

    }

    /** Shows an I/O file read, with no data capture */

    static void method01() throws IOException {
        // Creates the stream
        FileReader fr = new FileReader("file.txt");
        BufferedReader br = new BufferedReader(fr);// Creates the buffer
        br.mark(100); // Sets the upper bound on the buffer
        if (br.ready()) {
            System.out.println(br.readLine() + " method01");
            br.reset();
        }
        br.close();
    }

    /**
     * method02 augments the security of method01 with access modifiers and a string
     * variable that is destroyed
     */
    private static void method02() throws IOException {
        FileReader fr = new FileReader("file.txt");
        BufferedReader br = new BufferedReader(fr);
        String output = "";
        br.mark(100);
        if (br.ready()) {
            output += br.readLine();
            System.out.println(output + " method02");
            br.reset();

        }
        br.close();
        output = null;
    }
}
