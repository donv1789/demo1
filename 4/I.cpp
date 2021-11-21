#include <bits/stdc++.h>
using namespace std;

struct Node{
	int sm;
	int hs;
	Node *next;
};

struct List{
	Node *head, *tail;
};

void Init(List &l ){
	l.head = l.tail = NULL;
}

Node *creatNode( int h, int s ){
	Node *p = new Node;
	if( p == NULL ) exit(1);
	p->sm = s;
	p->hs= h;
	p->next = NULL;
	return p;
}

void addTail(List &l, Node *p ){
	if(l.head == NULL ) l.head = l.tail = p;
	else{
		l.tail->next = p;
		l.tail = p; 
	}
}

void nhap(List &l){
	string s;
	getline(cin,s);
	long long a[10001]={0};
	long long tmp1=0;
	long long tmp2=0;
	long long smax=0;
	long long smin=10001;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])==true&&s[i-1]!='^'){
			while(isdigit(s[i])==true){
				tmp1=tmp1*10+(long long)(s[i]-'0');
				i=i+1;
			}
		}
		if(isdigit(s[i])==true&&s[i-1]=='^'){
			while(isdigit(s[i])==true){
				tmp2=tmp2*10+(long long)(s[i]-'0');
				i=i+1;
			}
			a[tmp2]=tmp1;
			if(tmp2>smax) smax=tmp2;
			if(tmp2<smin) smin=tmp2;
		}
		if(s[i]=='+'){
			tmp1=0;
			tmp2=0;
		}		
	}
	for(long long i=smax;i>=smin;i--){
		Node *p = creatNode(a[i],i );
		addTail(l,p);
	}	
}

void cong( List &l, List l1, List l2 ){
	Node *p = new Node, *q = new Node;
	if(l1.head->sm > l2.head->sm ){
		l = l1;
		p = l2.head;
	}
	else{
		l = l2;
		p = l1.head;
	}
	
	q= l.head;
	while( q->sm > p->sm ) q = q->next; 
	while( q != NULL ){
		q->hs += p->hs;
		p = p->next; q =q->next;
	}
}

void xuat( List l ){
	Node *p = l.head;
	while( p!= l.tail ){
		if(p->hs) cout<<p->hs <<"*x^"<< p->sm;
		p = p->next;
		if(p->hs){
			if(p->hs >=0 ) cout<<" + ";
			else cout<<" ";
		}
	}
	cout<<p->hs<<"*x^"<<p->sm;
}

int main(){
	int numberTest;
	cin>>numberTest;
	cin.ignore();
	for(int i=0;i<numberTest;i++){
		List l, l1, l2;
		Init(l); Init(l1); Init(l2);
		nhap(l1);
		nhap(l2);
		cong(l, l1, l2 );
		xuat(l);
		cout<<endl;
	}
	return 0;
}
