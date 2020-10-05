#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	int i,n,c,f,m,x;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	m=v[i];f=1;
	for(i=0;i<n;i++){
		if(v[i]>0){
			c=1;
			for(int j=i+1;j<n;j++){
				if(v[i]==v[j]){
					v[j]=0;
					c+=1;
				}
			}
			if(c>f){
				f=c;m=v[i];
			}else{
				if(c==f){
					if(v[i]>m){
						f=c;m=v[i];
					}
				}
			}
		}
	}
	cout<<m<<endl;
	return 0;
}