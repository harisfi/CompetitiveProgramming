#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;

	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%10!=0)cout<<i<<endl;
		if(i==93){
			cout<<"ERROR"<<endl;
			break;
		}
	}
	return 0;
}