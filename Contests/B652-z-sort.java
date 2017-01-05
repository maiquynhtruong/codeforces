/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) a[i] = sc.nextInt();
		zSort(a);
		for (int i = 0; i < n; i++) System.out.print(a[i] + " ");
	}
	
	public static void zSort(int[] a) {
		Arrays.sort(a);
		// 1, 2, 2, 3, 5 -> 1, 5, 2, 3, 2
		int j = 1;
		for (int i = 2; i < a.length; i+=2) {
			if (a[i] > a[i-1]) {
				int tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
				j += 2;
			}
		}
	}
}
