#include <iostream>
#include <cmath>
using namespace std;

//f(x)=|ax+b|
int k;
int solve(int a,int b,int x){
	if(k==0) return x;
	k--;
	return abs((a*solve(a,b,x))+b);
}

int main() {
	int a,b,x;
	cin>>a>>b>>k>>x;
	cout<<solve(a,b,x)<<endl;
	return 0;
}