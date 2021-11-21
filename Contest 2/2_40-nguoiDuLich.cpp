#include<iostream>
using namespace std;
#define INFTY 200000
int C[15][15],Cost[(1<<15)-1][15];
struct node{
	int id,x;
	node *next;
};
int next_set(unsigned int v, int n){
    unsigned int w;
    unsigned int t = (v |(v - 1)) + 1;
    w = t | ((((t & -t) / (v & -v)) >> 1) - 1);
    if(w >> n == 0)return w;
    else return 0;
}
struct node *generate_subset(unsigned int seed, int n){
    struct node *head;
    head = new node;
    head->next = NULL;
    head->id = seed;
    struct node *iterator = head;
    int i = 0;
    for(i = 0; i< n; i++){
        if(((seed >> i)&1) == 1){
            struct node* elem =new node;
            elem->id = (1<<i)^seed;
            elem->x = i;
            elem->next = NULL;
            iterator->next = elem;
            iterator = iterator->next;
        }
    }
    return head;
}
void generate_all_subsets(struct node *subsets[], int size, int n){
    int i = 0;
    for(i = 1; i < size; i++){
        subsets[i] = generate_subset(i,n);
    }
}
void subtour_cost(struct node *subsets[], int set_id, int i){
    struct node *subset = subsets[set_id];
    struct node *iterator = subset->next;
    if(iterator->id == 0){
        Cost[set_id][i] = C[0][iterator->x] + C[iterator->x][i];
    }else{
        Cost[set_id][i] = INFTY;
        while(iterator != NULL){
            Cost[set_id][i] = min(Cost[set_id][i], Cost[iterator->id][iterator->x] + C[iterator->x][i]);
            iterator = iterator->next;
        }
    }
}
int dynamic_tsp (int n){
    unsigned int set;
    int size = 1 << n;
    struct node *subsets[size];
    generate_all_subsets(subsets,size, n);
    struct node *subset;
    struct node *iterator;
    int s = 2;
    int opt_tour = INFTY;
    for(s = 2; s < n; s++){
        set = (1<<s)-1;
        while(1){
            if((set&1) == 0){
                subset = subsets[set];
                iterator = subset->next;
                while(iterator != NULL){
                    subtour_cost(subsets, iterator->id, iterator->x);
                    if(s == n-1){
                        opt_tour = min(opt_tour,Cost[iterator->id][iterator->x] + C[iterator->x][0]);
                    }
                    iterator = iterator->next;
                }
            }
            set = next_set(set, n);
            if(set == 0){
                break;
            }
        }
    }
    return opt_tour;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
		cin>>C[i][j];
	cout<<dynamic_tsp(n)<<endl;
	return 0;
}
