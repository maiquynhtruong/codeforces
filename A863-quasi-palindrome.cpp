/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static boolean checkPalindrome(String s) {
		int n = s.length();
		for (int i = 0; i < n/2; i++) {
			if (s.charAt(i) != s.charAt(n-i-1)) return false;
		}
		return true;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		String n = s.next();
		// System.out.println(n);
		int len = n.length()-1;
		while (n.charAt(len) == '0') len--;
		n = n.substring(0, len+1);
		// System.out.println("len= " + len + ", n= " + n);
		if (checkPalindrome(n.toString())) System.out.println("YES");
		else System.out.println("NO");
	}
}
