// Java program to demonstrate
// ByteBuffer class

import java.nio.*;
import java.nio.channels.AsynchronousFileChannel;
import java.util.*;

public class ByteBuffer {

	public static void main(String[] args)
	{

		// Declaring the capacity of the ByteBuffer
		int capacity = 50;

		// Creating the ByteBuffer
		try {

			// creating object of ByteBuffer
			// and allocating size capacity
			ByteBuffer bb = ByteBuffer.allocate(capacity);

			// changeing bytebuffer view as char buffer
			// and putting a string value
			bb.asCharBuffer().put("GeeksForGeeks");

			// Declaring char variable c
			char c;

			// print the ByteBuffer
			System.out.print("Char buffer : ");
			while ((c = bb.getChar()) != 0)
				System.out.print(c + " ");
			System.out.println();
		}

		catch (IllegalArgumentException e) {

			System.out.println("Exception thrown : " + e);
		}

		catch (ReadOnlyBufferException e) {

			System.out.println("Exception thrown : " + e);
		}
	}
}
