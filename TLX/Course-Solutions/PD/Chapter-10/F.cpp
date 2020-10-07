#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d,t;
	vector<int> v;
	cin>>n>>d;
	int x[n],y[n];
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			t=pow(abs(x[j]-x[i]),d)+pow(abs(y[j]-y[i]),d);
			v.push_back(t);
		}
	}
	sort(v.begin(),v.end());
	cout<<v[0]<<" "<<v[v.size()-1]<<endl;
	return 0;
}