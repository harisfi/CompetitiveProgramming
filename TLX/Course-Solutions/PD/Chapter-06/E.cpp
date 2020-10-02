#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>pow(2,16)) goto jk;
	for(int i=16;i>=0;i--)
	{
		if(pow(2,i)==n)
		{
			cout<<"ya"<<endl;
			return 0;
		}
	}
	jk:
	cout<<"bukan"<<endl;
	return 0;
}