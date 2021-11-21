#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string tencha="",tencon="";
	int tuoi;
}DL;
typedef struct{
	string ten="";
	int tuoi;
}person;
vector <DL> a;
vector <person> b;
person info(string ten,int tuoi){
	person tmp;
	tmp.ten=ten;tmp.tuoi=tuoi;
	return tmp;
}
void DeQuy(person x){
	for(int i=0;i<a.size();i++)
		if(a[i].tencha==x.ten){
			person y=info(a[i].tencon,x.tuoi-a[i].tuoi);
			b.push_back(y);
			DeQuy(y);
		}
}
bool SoSanh(person x,person y){
	if((x.tuoi>y.tuoi)||((x.tuoi==y.tuoi)&&(x.ten<y.ten))) return true;
	return false;
}
void XuLy(int dem){
	int n;a.clear();b.clear();
	cin>>n;
	for(int i=0;i<n;i++){
		DL x;cin>>x.tencha>>x.tencon>>x.tuoi;
		a.push_back(x);
	}
	person x=info("Ted",100);
	b.push_back(x);
	DeQuy(x);
	sort(b.begin(),b.end(),SoSanh);
	cout<<"DATASET "<<dem<<endl;
	for(int i=1;i<b.size();i++)
		cout<<b[i].ten<<" "<<b[i].tuoi<<endl;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		XuLy(i+1);
	}
	return 0;
}
