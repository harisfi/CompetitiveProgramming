#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	bool sn=false;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])){sn=true;break;}
	}
	if(sn){
		for(int i=0;i<s.length();i++){
			if(isupper(s[i])){
				s[i]=tolower(s[i]);
				s.insert(i,"_");
			}
		}
	}else{
		for(int i=0;i<s.length();i++){
			if(s[i]=='_'){
				s[i+1]=toupper(s[i+1]);
				s.erase(i,1);
			}
		}
	}
	cout<<s<<endl;
	return 0;
}