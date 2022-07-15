/* Compliant, handling password */

import java.io.*;
import java.util.Arrays;

class PasswordCompliant {
    public static void main(String[] args)throws IOException {
        Console c = System.console();

        if (c == null) {
            System.err.println("No console");
            System.exit(1);
        }
        String username = c.readLine("Enter username:");
        char[] password = c.readPassword("Enter password:");
        if (!verify(username, password)) {
            throw new SecurityException("hanga banga boom");
        }
        Arrays.fill(password, ' ');

    }

    private static final boolean verify(String username, char[] password) {
        return true;
    }
}