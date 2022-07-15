import java.security.*;
// import java.util.*;

class test {
    public static void main(String[] argv) {
        int i = 10;
        try {

            // Signature foo = Signature.getInstance("SHAwithDSA");
            // Provider provider = foo.getProvider();
            // Collection<Object> someValue;

            // someValue = provider.values();.........

            // Iterator itr = someValue.iterator();
            // while (i > 0) {
            // System.out.println(itr.next());
            // i--;
            // }
            // System.out.print(provider.values());
            MessageDigest firstMessage = MessageDigest.getInstance("SHA-1");
            MessageDigest secondMessage = MessageDigest.getInstance("SHA-1");

            byte[] myEncryptedMessage = firstMessage.digest("I like cheetos".getBytes());
            // byte[] myOtherEncryptedMessage = secondMessage.digest("monkeydoodle".getBytes());
            System.out.println(firstMessage);
            System.out.println(firstMessage.digest());

            // boolean areSame = MessageDigest.isEqual(myOtherEncryptedMessage);
            // System.out.println(myEncryptedMessage + " " + md);
        } catch (NoSuchAlgorithmException e) {
            // TODO: handle exception
            System.out.println(e);
        }

    }
}