#include <bits/stdc++.h>
using namespace std;

int n, catat[999999], pernah[999999] = {false};

void tulis(int kedalaman) {
	bool zz, x, y;
	if(kedalaman>=n){
		zz = true;
		for(int i=1;i<n-1;i++) {
			x=(catat[i]>catat[i-1]) && (catat[i]>catat[i+1]);
			y=(catat[i]<catat[i-1]) && (catat[i]<catat[i+1]);
			if(!(x||y)) zz=false;
		}
		if(zz) {
			for(int i=0;i<n;i++) cout<<catat[i];
			cout<<endl;
		}
	} else {
		for(int i=1;i<=n;i++){
			if(!pernah[i]){
				pernah[i]=true;
				catat[kedalaman] = i;
				tulis(kedalaman+1);
				pernah[i]=false;
			}
		}
	}
}

int main() {
	cin>>n;
	tulis(0);
	return 0;
}