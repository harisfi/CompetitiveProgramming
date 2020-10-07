#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int n,i;
	bool fi=false;
	cin>>n;
	while(1){
		for(i=2;i<n;i++){
			if(n%i==0) break;
		}
		if(n/i==1) break;
		n/=i;
		v.push_back(i);
	}
	v.push_back(n);
	sort(v.begin(),v.end());
	n=v[0];i=0;
	for(int j=0;j<v.size();j++){
		if(v[j]!=n){
			if(fi) cout<<" x ";
			if(i>1) cout<<v[j-1]<<"^"<<i;
			else cout<<v[j-1];
			n=v[j];
			i=1;
			fi=true;
		}
		else i++;
	}
	if(fi) cout<<" x ";
	if(i>1) cout<<v[v.size()-1]<<"^"<<i;
	else cout<<v[v.size()-1];
	cout<<endl;
	return 0;
}