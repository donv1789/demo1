#include<iostream>
#include<queue>
#include<map>
using namespace std;
queue <pair<string,int> > q;
map <string,int> duong_di,nhanh;
int trai_thuan[]={3,0,2,4,1,5};
int phai_thuan[]={0,4,1,3,5,2};
int trai_nghich[]={1,4,2,0,3,5};
int phai_nghich[]={0,2,5,3,1,4};
string quay(string s,int a[])
{
	string temp="";
	for(int i=0;i<6;i++)
	 temp+=s[a[i]];
	return temp;
}
int check(string s,pair<string,int> top)
{
	if(!duong_di[s]){
		nhanh[s]=nhanh[top.first];
		duong_di[s]=duong_di[top.first]+1;
		q.push(make_pair(s,top.second));
	}
	else{
		if(nhanh[s]!=nhanh[top.first]){
			cout<<duong_di[s]+duong_di[top.first];
			return 1;
		}
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	char c;
	string start="",finish="";
	for(int i=0;i<6;i++)
    {
    	cin>>c;
    	start+=c;
	}
	for(int i=0;i<6;i++)
    {
    	cin>>c;
    	finish+=c;
	}
	if(!start.compare(finish)){
		cout<<0;
		return 0;
	}
	q.push(make_pair(finish,0));
	nhanh[finish]=duong_di[finish]=0;
	q.push(make_pair(start,1));
	nhanh[start]=duong_di[start]=1;
	while(!q.empty())
	{
		pair<string,int> top=q.front();
	    q.pop();
		if(top.second){
			string temp=quay(top.first,trai_thuan);
			if(check(temp,top))break;
			temp=quay(top.first,phai_thuan);
			if(check(temp,top))break;
		}
		else{
			string temp=quay(top.first,trai_nghich);
			if(check(temp,top))break;
			temp=quay(top.first,phai_nghich);
			if(check(temp,top))break;
		}
	}
	return 0;
}
