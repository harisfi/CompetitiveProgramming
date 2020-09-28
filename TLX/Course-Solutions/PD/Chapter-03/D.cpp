#include <iostream>
using namespace std;

int main() {
	int n,m,x;
	cin>>n>>m;
	x=n%m;
	cout<<"masing-masing "<<((n-x)/m)<<endl;
	cout<<"bersisa "<<x<<endl;
	return 0;
}