#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int>a;
	int b=0,c;
	while(cin>>c) {
		a.push_back(c);
		b++;
	}
	while(b--)cout<<a[b]<<endl;
	return 0;
}