public class Main {

	public static void main (String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int q = sc.nextInt();
		int root[] = new int[n+1];
		for (int i = 0; i <= n; i++) root[i] = i;
		for (int i = 0; i < q; i++) {
			int type = sc.nextInt();
			int x = sc.nextInt(), y = sc.nextInt();
			if (type == 1) {
				union(root, x, y);
			} else if (type == 2) {
				for (int i = x; i < y; i++) {
					union(root, team[i], team[i-1]);
				}
			} else if (type == 3) {
				boolean result = find(root, x) == find(root, y);
				System.out.println(result == 1 ? "YES" : "NO");
			}	
		}
	}
	public static void union(int root[], int x, int y) {

	}
	public static int find(int root[], int x) {
		return x == root[x] ? x : (p[x] = find(p[x]));
	}
}
