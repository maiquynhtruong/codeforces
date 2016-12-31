/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	static class TempObj {
		int sum;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		int m, n, k;
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		String[] temp = b.readLine().split(" ");
		n = Integer.parseInt(temp[0]);
		m = Integer.parseInt(temp[1]);
		k = Integer.parseInt(temp[2]);
		char[][] cells = new char[n][m];
		TempObj[][] res = new TempObj[n][m];
		boolean[][] visited = new boolean[n][m];
		for (int i = 0; i < n; i++) {
			cells[i] = b.readLine().toCharArray();
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (cells[i][j] == '.' && res[i][j] == null) {
					countPics(cells, i, j, res, new TempObj());
				}
			}
		}
		for (int t = 0; t < k; t++) {
			temp = b.readLine().split(" ");
			int x = Integer.parseInt(temp[0])-1;
			int y = Integer.parseInt(temp[1])-1;
			// System.out.println("x= " + x + ", y= " + y);	
			System.out.println(res[x][y].sum);
		}
		
	}
	
	public static void countPics(char[][] cells, int i, int j, TempObj[][] res, TempObj t) {
		// System.out.println("i= " + i + ", j= " + j + ", curSum= " + t.sum);
		if (cells[i][j] == '*' || res[i][j] != null) return;
		int retVal = 0;
		// System.out.println("cells[" + (i-1) + "][" + j + "]= " + cells[i-1][j]);
		if (cells[i-1][j] == '*') retVal++;
		if (cells[i+1][j] == '*') retVal++;
		if (cells[i][j-1] == '*') retVal++;
		if (cells[i][j+1] == '*') retVal++;
		t.sum += retVal;
		res[i][j] = t;
		countPics(cells, i-1, j, res, t);
		countPics(cells, i+1, j, res, t);
		countPics(cells, i, j-1, res, t);
		countPics(cells, i, j+1, res, t);
	}
}
