
//Java program demonstrating BufferedReader methods
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;

class StreamMethods {
    public static void main(String[] args) throws IOException {
        byteStreamReadWrite();
        fileReaderDemo();
        bufferReadDemo();
    }

    /* Reading a character stream */
    static void fileReaderDemo() throws IOException {
        FileReader fr = new FileReader("./test.txt");
        // System.out.println(fr);
        int temp;
        while ((temp = fr.read()) != -1) {
            System.out.print((char) temp);
        }

    }

    /* Working with byte stream */
    static void byteStreamReadWrite() throws IOException {
        FileInputStream fin = new FileInputStream("test.txt");
        FileOutputStream fout = new FileOutputStream("testCopy.txt");
        int placeholder;
        while ((placeholder = fin.read()) != -1) {
            fout.write((byte) placeholder);
        }
    }

    // BufferReader reads text from a stream and is used to wrap a reader method
    // such as FileReaders and InputStreamReaders
    /*
     * Without buffering, each invocation of read() or readLine() could cause bytes
     * to be read from the file, converted into characters, and then returned, which
     * can be very inefficient.
     */
    static void bufferReadDemo() throws IOException {
        FileReader fr = new FileReader("test.txt");
        BufferedReader br = new BufferedReader(fr);
        System.out.println(br);
        System.out.println(fr);

    }
}
