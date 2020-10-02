#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,z;
	vector<int> l;
	cin>>n;
	z=n;
	while(n--)
	{
		cin>>x;
		l.push_back(x);
	}
	sort(l.begin(),l.end());
	cout<<l[z-1]<<" "<<l[0]<<endl;
	return 0;
}