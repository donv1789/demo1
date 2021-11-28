package DoThi.KiemTraThu;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DemTPLienThong {
    public static List<Integer>[] list=(List<Integer>[])new List[1005];
    public static int[] check=new int[1005];
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
            check=new int[1005];
            for(int i=0;i<list.length;i++)
                list[i]=new ArrayList<>();
            int a=sc.nextInt();
            int b=sc.nextInt();
            for(int i=0;i<b;i++){
                int u=sc.nextInt();
                int v=sc.nextInt();
                list[u].add(v);
                list[v].add(u);
            }
            int res=0;
            for(int i=1;i<=a;i++){
                res++;
                DFS(i);
            }
               System.out.println(res);  
    }
    public static void DFS(int u){
        check[u]=1;
        for(int i=0;i<list[u].size();i++){
            int v=list[u].get(i);
            if(check[v]==0) DFS(v);
        }
    }
}
