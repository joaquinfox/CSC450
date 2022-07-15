
import java.io.*;
import java.util.*;
import java.nio.*;

class BufferedReader {
    public static void main(String[] args) throws IOException {
        // readData();
    }

    /* NON COMPLIANT */
    //  void readData() throws IOException {
    //     BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream(file)));

    //     String data = br.readLine();
    // }

    /* COMPLIANT */
     void readData() {
        ByteBuffer buffer = ByteBuffer.allocateDirect(16 * 1024);
        try (FileChannel rdr = (new FileInputStream("file")).getChannel()) {
            while (rdr.read(buffer) > 0) {
                buffer.clear();
            }

        } catch (Throwable e) {
        }
    }

}