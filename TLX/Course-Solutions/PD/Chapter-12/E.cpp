#include <bits/stdc++.h>
using namespace std;

string bin(int n){
	if(n==1)
		return "1";
	else if(n%2==1)
		return bin(n/2)+"1";
	else
		return bin(n/2)+"0";
}
int main() {
	int n;
	cin>>n;
	cout<<bin(n)<<endl;
	return 0;
}