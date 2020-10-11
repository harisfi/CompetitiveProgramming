#include <bits/stdc++.h>
using namespace std;

void gambar(int n){
	for(int j=0;j<n;j++){
		cout<<"*";
	}
	cout<<endl;
}
int main() {
	vector<int> v;
	int n;
	cin>>n;
	v.push_back(1);
	for(int i=1;i<n;i++){
		v.push_back(i+1);
		for(int j=v.size()-2;j>=0;j--){
			v.push_back(v[j]);
		}
	}
	for(int i=0;i<v.size();i++){
		gambar(v[i]);
	}
	return 0;
}