#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int k,t;
	cin>>s>>k;
	for(int i=0;i<s.length();i++)
	{
		t=s[i]+k;
		if(t>122) s[i]=96+(t-122);
		else s[i]=t;
		cout<<s[i];
	}cout<<endl;
	return 0;
}