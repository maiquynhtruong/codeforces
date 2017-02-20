/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(b.readLine());
		long[] c = new long[n];
		String[] temp = b.readLine().split(" ");
		String[] strs = new String[n];
		for (int i = 0; i < n; i++) {
			strs[i] = b.readLine();
			c[i] = Long.parseLong(temp[i]);
		}
		// Ideone m = new Ideone();
		System.out.println(mininum(strs, c, n));
	}
	
	static public String reverse(String s) {
		return new StringBuilder(s).reverse().toString(); 
	}
	static public long mininum(String[] strs, long[] c, int n) {
		long[][] dp = new long[n+1][2];
		dp[0][0] = 0; dp[0][1] = c[0]; 
		for (int i = 1; i < n; i++) {
			dp[i][0] = Long.MAX_VALUE/2;
			dp[i][1] = Long.MAX_VALUE/2;
			if (strs[i-1].compareTo(strs[i]) <= 0)
 				dp[i][0] = Math.min(dp[i][0], dp[i-1][0]); // strs[i] not reversed, strs[i-1] not reversed
 			if (reverse(strs[i-1]).compareTo(strs[i]) <= 0)
				dp[i][0] = Math.min(dp[i][0], dp[i-1][1]); // strs[i] not reversed, strs[i-1] reversed
			if (strs[i-1].compareTo(reverse(strs[i])) <= 0)
				dp[i][1] = Math.min(dp[i][1], dp[i-1][0] + c[i]); // strs[i] reversed, strs[i-1] not reversed
			if (reverse(strs[i-1]).compareTo(reverse(strs[i])) <= 0)
				dp[i][1] = Math.min(dp[i][1], dp[i-1][1] + c[i]); // strs[i] reversed, strs[i-1] reversed
		}
		long res = Math.min(dp[n-1][0], dp[n-1][1]);
		if (res < Long.MAX_VALUE/2)
			return res;
		else
			return -1;
	}
}
