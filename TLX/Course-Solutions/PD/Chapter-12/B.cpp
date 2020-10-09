#include <iostream>
using namespace std;

int fakt(int n){
	if(n<=1) return 1;
	if(n%2==0){
		return (n/2)*fakt(n-1);
	}else{
		return n*fakt(n-1);
	}
}

int main() {
	int n;
	cin>>n;
	cout<<fakt(n)<<endl;
	return 0;
}