#include <stdio.h>
 
struct queue {
    int front;
    int back;
    long node[1003];
};
struct queue q;
 
void khoitao () {
    q.back=0;
    q.front=0;
}
 
int size () {
    return q.back-q.front;
}
 
int empty () {
    if (size()==0) return 1;
    else return 0;
}
 
void push (long a) {
    q.node[q.back]=a;
    q.back++;
}
 
void pop () {
    if (empty ()!=1) {
        q.front++;
    }
}
 
long front () {
    if (empty()==1) return -1;
    else return q.node[q.front];
}
 
long final () {
    if (empty()==1) return -1;
    else return q.node[q.back-1];
}
 
int main () {
    int x;
    scanf ("%d", &x);
    while(x--){
    	khoitao ();
    	int t;
	    scanf ("%d", &t);
	    int tv;
	    long x;
	    for (int i=1; i<=t; i++) {
	        scanf ("%d", &tv);
	        if (tv==1) printf ("%d\n", size());
	        if (tv==2) {
	            if (empty ()==1) printf ("YES\n");
	            else printf ("NO\n");
	        }
	        if (tv==3) {
	            scanf ("%ld", &x);
	            push (x);
	        }
	        if (tv==4) pop ();
	        if (tv==5) printf ("%ld\n", front ());
	        if (tv==6) printf ("%ld\n", final ());
	    }
	}
    return 0;
}
