package DoThi;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
 
public class KiemTraChuTrinh {
    static int n, m;
    static ArrayList<Integer>[] dske = new ArrayList[1001];
    static boolean chuaxet[] = new boolean[1001];
    static int truoc[] = new int[1001];
    static boolean ok;
 
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while (t-- > 0) {
            ok = false;
            n = scn.nextInt();
            m = scn.nextInt();
            for (int i = 0; i <= n; i++) {
                dske[i] = new ArrayList<>();
                chuaxet[i] = true;
            }
            for (int i = 1; i <= m; i++) {
                int u = scn.nextInt();
                int v = scn.nextInt();
                dske[u].add(v);
                dske[v].add(u);
            }
 
            // số thành phần liên thông
            for (int i = 1; i <= n; i++) {
                if (chuaxet[i]) {
                    if(bfs(i)){
                        ok = true;
                        break;
                    }
                }
            }
            if (ok) System.out.println("YES");
            else System.out.println("NO");
        }
    }
 
    private static boolean bfs(int s) {
        Queue<Integer> q = new LinkedList();
        q.add(s);
        chuaxet[s] = false;
        while (q.size()>0){
            int x = q.poll();
            for(Integer a : dske[x]){
                if(chuaxet[a]){
                    chuaxet[a]=false;
                    truoc[a]=x;
                    q.add(a);
                }
                // đúng là 1 chu trình
                else if(a != truoc[x]) return true;
            }
        }
        return false;
    }
}