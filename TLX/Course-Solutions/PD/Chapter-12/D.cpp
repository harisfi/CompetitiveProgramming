#include <iostream>
#include <cstring>
using namespace std;

string solve(string s){
	if(s.length()<=1) return "YA";
	if(s[0]==s[s.length()-1]){
		s.erase(s.begin());
		s.erase(s.end()-1);
		return solve(s);
	}else{
		return "BUKAN";
	}
}

int main() {
	string s;
	cin>>s;
	cout<<solve(s)<<endl;
	return 0;
}