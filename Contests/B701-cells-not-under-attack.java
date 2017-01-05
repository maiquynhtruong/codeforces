/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// BufferedReader b = new BufferedReadered(new InputStreamReader(System.in));
		// StringTokenizer s = new StringTokenizer(b.readLine());
		Scanner sc = new Scanner(System.in);
		// int n = s.nextToken(), m = s.nextToken();
		int n = sc.nextInt(), m = sc.nextInt();
		int[] rows = new int[n]; 
		int[] cols = new int[n];
		int ur = 0, uc = 0;
		for (int i = 0; i < m; i++) {
			// s = StringTokenizer(b.readLine());
			// int row = s.nextToken()-1, col = s.nextToken()-1;
			int row = sc.nextInt()-1, col = sc.nextInt()-1;
			if (rows[row] <= 0) ur++;
			if (cols[col] <= 0) uc++;
			rows[row]++; cols[col]++;
			// for (int c = 0; c < n; c++) System.out.print(cols[c] + " ");
			// System.out.println("co= " + co);
			// for (int r = 0; r < n; r++) System.out.print(rows[r] + " ");
			// System.out.println("re= " + re);
			
			System.out.print(1L*(n-uc)*(n-ur) + " ");
			System.out.println();
		}
	}
}
