package DoThi;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author Nguyễn Dương
 */
public class DuongDiDFS {
    static ArrayList<Integer> ke[] = new ArrayList[1005];
	static boolean chuaxet[] = new boolean[1005];
        static int truoc[]=new int[1005];
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int test = in.nextInt(), t=in.nextInt();
		while(test-->0) {
			int n= in.nextInt(),m = in.nextInt();
                        int s = in.nextInt();
			for(int i=0;i<=n;i++) {
				ke[i] = new ArrayList<>();
				chuaxet[i] = true;
                                truoc[i]=0;
			}
			for(int i=1;i<=m;i++) {
				int u = in.nextInt(),v = in.nextInt();
				ke[u].add(v);
				ke[v].add(u);
			}
			dfs(s);
			if(chuaxet[t]) System.out.println(-1);
                        else{
                            ArrayList<Integer> kq=new ArrayList<>();
                            int x=t;
                            while(x!=s){
                                kq.add(x);
                                x=truoc[x];
                            }
                            kq.add(s);
                            Collections.reverse(kq);
                            for(Integer tmp:kq){
                                System.out.print(tmp+" ");
                            }
                            System.out.println();
//                            Stack<Integer> st=new Stack<>();
//                            st.push(t);
//                            while(st.peek()!=s){
//                                st.push(truoc[st.peek()]);
//                            }
//                            while(!st.empty()){
//                                System.out.print(st.peek()+" ");
//                                st.pop();
//                            }
//                            System.out.println();
                        }
		}
	}
	public static void dfs(int u) {
//		System.out.print(u + " "); // tat di vi ko pai in ra
		chuaxet[u] = false;
		for(Integer v : ke[u]) {
			if(chuaxet[v]){
                            dfs(v);
                            truoc[v]=u;
                        }
		}
	}
}
