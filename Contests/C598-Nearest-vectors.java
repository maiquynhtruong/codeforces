/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	static class Vector implements Comparable<Vector> {
		int x, y, i;
		Vector(int x, int y, int i) {this.x = x; this.y = y; this.i = i;}
		// cross product of two 2d vectors is like that of 3d vectors with z component = 0
		// http://blackpawn.com/texts/pointinpoly/default.html
		int crossProduct(Vector b) {
			return this.x*b.y - this.y*b.x;
		}
		boolean upperQuadrant(Vector v) {
			return v.y > 0 || v.y == 0 && v.x > 0;
		}
		public int compareTo(Vector b) {
			boolean upA = upperQuadrant(this);
			boolean upB = upperQuadrant(b);
			if (!upA && upB) return 1;
			else if (upA && !upB) return -1;
			else return crossProduct(b) > 0 ? -1 : 1;
		}
	}
	
	static class Rational implements Comparable<Rational> {
		long p, q;
		Rational(Vector a, Vector b) {
			// p = dist(a.x, a.y) + dist(b.x, b.y) - dist(a.x - b.x, a.y - b.y);
			p = a.x * b.x + a.y * b.y;
			p *= p*(p < 0 ? -1 : 1);
			// The code before didn't work because int*int = int. If overflow occurs, long cannot catch it
			q = dist(a.x, a.y) * dist(b.x, b.y);// * 4;
			// System.out.println(a.x + " " + a.y + ", " + b.x + " " + b.y + ", p: " + p + ", q: " + q);
			
		}
		
		long dist(long x, long y) {
			return x*x + y*y;
		}
		
		public int compareTo(Rational b) {
			// System.out.println("p: " + p + ", q: " + q + " , b.p: " + b.p + ", b.q: " + b.q);
			BigInteger product1 = BigInteger.valueOf(p).multiply(BigInteger.valueOf(b.q));
			BigInteger product2 = BigInteger.valueOf(q).multiply(BigInteger.valueOf(b.p));
			// System.out.println("product1: " + product1 + ", product2: " + product2);
			return product2.compareTo(product1);
		}
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(b.readLine());
		Vector[] vectors = new Vector[n];
		for (int i = 0; i < n; i++) {
			String[] temp = b.readLine().split(" ");
			vectors[i] = new Vector(Integer.parseInt(temp[0]), Integer.parseInt(temp[1]), i+1);
		}
		Arrays.sort(vectors);
		// System.out.print("Vectors: ");
		// for (Vector v : vectors) System.out.print(v.x + " " + v.y + ", ");
		Rational cur = new Rational(vectors[0], vectors[n-1]);
		int imin = vectors[0].i, jmin = vectors[n-1].i;
		// System.out.println("Initial: " + vectors[0].x + " " + vectors[0].y + ", " + vectors[n-1].x + " " + vectors[n-1].y);
		// System.out.println("Comparing:");
		for (int i = 1; i < n; i++) {
			Rational r1 = new Rational(vectors[i], vectors[i-1]);
			// System.out.println(vectors[i].x + " " + vectors[i].y + ", " + vectors[i-1].x + " " + vectors[i-1].y + ", compare: " + r1.compareTo(cur));
			// System.out.println("p: " + r1.p + ", q: " + r1.q);
			if (r1.compareTo(cur) < 0) {
				cur = r1;
				imin = vectors[i].i;
				jmin = vectors[i-1].i;
				// System.out.println("New: " + imin + " " + jmin);
			}
		}
		
		System.out.println(imin + " " + jmin);
	}
}
