#include <bits/stdc++.h>
using namespace std;

int bagi(int x){
	int y=0;
	for(int i=1;i<=x;i++){
		if(x%i==0) y++;
		if(y>=5) return y;
	}
	return y;
}
int main() {
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(bagi(x)<=4) cout<<"YA\n";
		else cout<<"BUKAN\n";
	}
	return 0;
}