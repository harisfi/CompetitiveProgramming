#include <bits/stdc++.h>
using namespace std;

struct peserta{
	string id;
	int s1,s2,s3;/*
	bool operator < (const peserta& pp) const{
        return s3<pp.s3;
	}*/
};

bool cmp(const peserta& p1,const peserta& p2){
    if(p1.s3==p2.s3){
		if(p1.s2==p2.s2){
			return p1.s1 > p1.s1;
		}
		return p1.s2 > p2.s2;
	}return p1.s3 > p2.s3;
}

int main() {
    int t;
	cin>>t;
	while(t--){
		int n,m;
		string IDl;
		vector<peserta> vp;
        peserta p;

		cin>>n>>m;
		cin>>IDl;
		while(n--){
			cin>>p.id>>p.s1>>p.s2>>p.s3;
			vp.push_back(p);
		}
		sort(vp.begin(),vp.end(),cmp);
		while(m--){
            if(vp[m].id==IDl){
                cout<<"YA"<<endl;
                goto loi;
            }
		}cout<<"TIDAK"<<endl;
        loi:;
	}
	return 0;
}