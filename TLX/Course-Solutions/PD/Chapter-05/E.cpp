#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>=0&&n<10) cout<<"satuan"<<endl;
	if(n>=10&&n<100) cout<<"puluhan"<<endl;
	if(n>=100&&n<1000) cout<<"ratusan"<<endl;
	if(n>=1000&&n<10000) cout<<"ribuan"<<endl;
	if(n>=10000&&n<100000) cout<<"puluhribuan"<<endl;
	return 0;
}