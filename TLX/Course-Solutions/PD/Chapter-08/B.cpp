#include <iostream>
using namespace std;

int main() {
	int n,x,i;
	bool k;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x==1)
		{
			cout<<"BUKAN"<<endl;
		}else
		{
			k=false;
			i=2;
			while(i*i<=x)
			{
				if(x%i==0)
				{
					cout<<"BUKAN"<<endl;
					k=true;
					break;
				}
				i++;
			}
			if(!k) cout<<"YA"<<endl;
		}
	}
	return 0;
}