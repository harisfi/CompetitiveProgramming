#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;
	size_t f=s.find(t);
	while(f!=string::npos){
		s.erase(f,t.length());
		f=s.find(t);
	}
	cout<<s<<endl;
	return 0;
}