/* Non compliant, handling passwords... what if we just delete the string?*/ 
import java.io.*;

class Password {
    public static void main(String[] args)throws IOException {
        Console c = System.console();

        if (c == null) {
            System.err.println("No console");
            System.exit(1);
        }
        String username, password;
        username = c.readLine("Enter username:");
        password = c.readLine("Enter password:");
        if (!verify(username, password)) {
            throw new SecurityException("hanga banga boom");
        }

    }

    private static final boolean verify(String username, String password) {
        return true;
    }
}