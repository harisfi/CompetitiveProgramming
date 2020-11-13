#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> vs;
	string s0, s1, s3, s4, s5, s6, sb="*";
	int n, loc, loc1;
	
	cin>>s0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>s1;
		vs.push_back(s1);
	}
	if(s0==sb) {
		for(int i=0;i<n;i++) {
			cout<<vs[i]<<endl;
		}
	} else {
		 if(s0[0]=='*') {
		 	for(int i=0;i<n;i++) {
		 		if(vs[i].length()>=s0.length()-1) {
			 		s3=vs[i].substr(vs[i].length()-s0.length()+1, s0.length()-1);
			 		s4=s0.substr(1,s0.length()-1);
			 		if(s3==s4) cout<<vs[i]<<endl;
		 		}
		 	}
		 } else if(s0[s0.length()-1]=='*') {
		 	for(int i=0;i<n;i++) {
		 		if(vs[i].length()>=s0.length()-1) {
			 		s3=vs[i].substr(0, s0.length()-1);
			 		s4=s0.substr(0,s0.length()-1);
			 		if(s3==s4) cout<<vs[i]<<endl;
		 		}
		 	}
		 } else {
		 	for(int i=0;i<s0.length();i++){
				if(s0[i]=='*'){
					loc=i;
					break;
				}
			}
			loc1=s0.length()-loc;
			
		 	for(int i=0;i<n;i++) {
		 		if(vs[i].length()>=s0.length()-1) {
			 		s3=vs[i].substr(0, loc);
			 		s4=s0.substr(0,loc);
			 		s5=vs[i].substr(vs[i].length()-loc1+1, loc1-1);
			 		s6=s0.substr(loc+1,loc1-1);
			 		if(s3==s4&&s5==s6) cout<<vs[i]<<endl;
		 		}
		 	}
		 }
	}
	return 0;
}