#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k=0;

	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<k;
			if(k==9) k=-1;
			k++;
		}
		cout<<endl;
	}
	return 0;
}