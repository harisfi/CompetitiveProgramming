#include <bits/stdc++.h>
using namespace std;

int arr[1][99999];

void pind(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int n,t,x,y;
	char ca[5],cb[5];
	cin>>n;
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>ca>>x>>cb>>y;
		x--;y--;
		int p=ca[0]-'A';
		int q=cb[0]-'A';
		pind(arr[p][x], arr[q][y]);
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
			if(j!=n-1) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}