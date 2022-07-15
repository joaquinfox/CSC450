import java.security.*;

class hashTest {
    public static void main(String[] argv) {
        int i = 10;
        try {

            MessageDigest firstHash = MessageDigest.getInstance("SHA-1");

            System.out.println("This is header information for the provider: " + firstHash);
            System.out.println("This is the actual hash     : " + firstHash.digest());

            byte[] myEncryptedMessage = firstHash.digest("I like cheetos".getBytes());

            System.out.println("This is my encrypted message: " + myEncryptedMessage);

            byte[] aDifferentEncryptedMessage = firstHash
                    .digest("Oh yeah life goes on, just two American kids in the heartland".getBytes());
            System.out.println("This is a different message : " + aDifferentEncryptedMessage);
        } catch (NoSuchAlgorithmException e) {
            System.out.println(e);
        }

    }
}