#include <iostream>
using namespace std;

int main() {
	int a,b,k,x,fx;
	cin>>a>>b>>k>>x;
	fx=0;
	fx=(a*x)+b;
	if(fx<0)fx=-fx;
	k--;
	while(k--){
		fx=(a*fx)+b;
		if(fx<0)fx=-fx;
	}
	cout<<fx<<endl;
	return 0;
}