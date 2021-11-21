#include<bits/stdc++.h>
using namespace std;
#define MAX 100009
int s[MAX], e[MAX];
int N;

void swap(int i, int j)
    {
        int tmp = e[i];
        e[i] = e[j];
        e[j] = tmp;
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

void qsort(int a[], int start, int end)
    {
        if (start >= end)
            return;
        int index = rand() % (start-end) + start;
        int pivot = a[index];
        int k = start - 1;
        swap(index, end);
        for (int i = start; i < end; i++)
        if (a[i] < pivot)
        {
            k++;
            swap(i, k);
        }
        k++;
        swap(k, end);
        qsort(a, start, k-1);
        qsort(a, k+1, end);
    }

void proc(){
        int res = 1;
        int end = e[0];
        for (int i = 1; i < N; i++)
        {
            if (e[i] == end)
                continue;
            if (s[i] >= end)
            {
                res++;
                end = e[i];
            }
        }
        cout<<res<<endl;
}
int main(){
	int t=0;
	cin>>t;
	while (t--){
		cin>>N;
            for (int i = 0; i < N; i++)
                cin>>s[i]>>e[i];
            qsort(e, 0, N-1); 
            proc();
	}
	return 0;             
}
