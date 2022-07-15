// Java program to demonstrate
// values() method

import java.security.*;
import java.util.*;

public class GFG1 {
	public static void main(String[] argv)
	{
		// Declaring int value i
		int i = 10;

		try {
			// creating the object of Signature
			Signature sr = Signature.getInstance("SHA1withDSA");

			// getting the Provider of the Signature sr
			// by using method getProvider()
			Provider provider = sr.getProvider();

			// Declaring the variable of set<Map> type
			Collection<Object> value;

			// getting unmodifiable Set view of the property value
			value = provider.values();

			// Creating the object of iterator to iterate set
			Iterator iter = value.iterator();

			// printing the set elements
			System.out.println("unmodifiable Set view : \n ");
			while (i > 0) {
				System.out.println("Value is : " + iter.next());
				i--;
			}
		}

		catch (NoSuchAlgorithmException e) {

			System.out.println("Exception thrown : " + e);
		}
	}
}
