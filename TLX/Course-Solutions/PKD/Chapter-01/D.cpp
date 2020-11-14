#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b, c="";
	int x=-1;
	
	cin>>a;
	cin>>b;
	if(a.length()-b.length()==1) {
		for(int i=0;i<a.length();i++) {
			if(a[i]!=b[i]) {
				for(int j=i+1;j<a.length();j++) {
					if(a[j]!=b[j-1]) {
						cout<<"Wah, tidak bisa :("<<endl;
						return 0;
					}
				}
			}
		}
		cout<<"Tentu saja bisa!"<<endl;
	} else cout<<"Wah, tidak bisa :("<<endl;
	return 0;
}