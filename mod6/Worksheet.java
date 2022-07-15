import java.util.Scanner;

public class Worksheet {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        String str = "";
        boolean done = false;
        while (!done) {
            System.out.print("E)nter a string to generate substrings or Q)uit");
            str = in.next();
            if (str.toUpperCase().equals("Q")) {
                done = true;
            } else {
                substrings(str, "");
            }
        }
    }

    public static void substrings(String str, String temp) {
        if (str.length() == 0) {
            System.out.println(temp);
            return;
        }
        substrings(str.substring(1), temp + str.substring(0, 1));
        substrings(str.substring(1), temp);
    }
}