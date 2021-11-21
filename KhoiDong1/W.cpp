#include<bits/stdc++.h>
using namespace std;

string subtract(string number1, string number2) {
    string sub = (number1.length()>number2.length())? number1 : number2;
    int differenceInLength = abs( (int)(number1.size() - number2.size()) );

    if(number1.size() > number2.size())
        number2.insert(0, differenceInLength, '0');

    else
        number1.insert(0, differenceInLength, '0');

    for(int i=number1.length()-1; i>=0; --i) {
        if(number1[i] < number2[i]) {
            number1[i] += 10;
            number1[i-1]--;
        }
        sub[i] = ((number1[i]-'0')-(number2[i]-'0')) + '0';
    }

    while(sub[0]=='0' && sub.length()!=1) // erase leading zeros
        sub.erase(0,1);

    return sub;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=0;
	cin>>t;
	while (t--){
		string a,b;
		cin>>a>>b;
		string c;
		if(a.length()>b.length()) c=subtract(a,b);
		else if (a.length()<b.length()) c=subtract(b,a);
		else{
			int check=1;
			for (int i=0; i<a.length(); i++){
				if(a[i]>b[i]){
					c=subtract(a,b);
					check=0;
					break;
				} 
				else if (a[i]<b[i]){
					c=subtract(b,a);
					check=0;
					break;
				}
			}
			if (check) c=subtract(a,b);
		}
		cout<<c<<endl;	
	}
	return 0;
}

