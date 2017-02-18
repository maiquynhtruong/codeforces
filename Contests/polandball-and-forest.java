import java.util.*;
public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();	
		HashSet<Integer> hs = new HashSet<Integer>();
		int singleForest = 0;
		for (int i = 0; i < n; i++) {
			int input = sc.nextInt();
			if (i + 1 == input) {
				singleForest++;
			} else {
				hs.add(input);
			}
		}
		System.out.println(singleForest + hs.size() / 2);
	}
}
