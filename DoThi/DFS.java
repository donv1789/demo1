package DoThi;

import java.util.ArrayList;
import java.util.Scanner;

public class DFS {
	static ArrayList<Integer> ke[] = new ArrayList[1005];
	static boolean chuaxet[] = new boolean[1005];
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t-->0) {
			int n= in.nextInt(),m = in.nextInt(),start = in.nextInt();
			for(int i=0;i<=n;i++) {
				ke[i] = new ArrayList<>();
				chuaxet[i] = true;
			}
			for(int i=1;i<=m;i++) {
				int u = in.nextInt(),v = in.nextInt();
				ke[u].add(v);
				ke[v].add(u);
			}
			dfs(start);
			System.out.println();
		}
	}
	public static void dfs(int u) {
		System.out.print(u + " ");// in ra luoon o day
		chuaxet[u] = false;
		for(Integer v : ke[u]) {
			if(chuaxet[v]) dfs(v);
		}
	}
}

