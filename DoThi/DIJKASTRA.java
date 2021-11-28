package DoThi;

import java.util.ArrayList;
import java.util.PriorityQueue;
import java.util.Scanner;

public class DIJKASTRA {
    static int n,k,start;
    static long base=1000001;
    static long d[]=new long[100005];
    static PriorityQueue<Long> q=new PriorityQueue<Long>();
    static boolean daxet[]=new boolean[100005];
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            n=sc.nextInt();
            k=sc.nextInt();
            start=sc.nextInt();
            ArrayList<ArrayList<Long>> list=new ArrayList<>();
            for(int i=0;i<=n;i++){
                list.add(new ArrayList<Long>());
                daxet[i]=false;
                d[i]=(int)1e9;
            }
            for(int i=1;i<=k;i++){
                int u=sc.nextInt();
                int v=sc.nextInt();
                int c=sc.nextInt();
                list.get(u).add(1L*(c*base+v));
                list.get(v).add(1L*(c*base+u));
            }
            d[start]=0;
            daxet[start]=true;
            for(long x:list.get(start)){
                
            }
        }
    }
}
