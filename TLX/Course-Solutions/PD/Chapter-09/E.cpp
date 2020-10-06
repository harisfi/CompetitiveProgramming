#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld_ long double
#define vi_ vector<int>
#define pi_ pair<int,int>

#define pb_ push_back
#define st first
#define nd second

#define FOR(i,x,y) for(int i=(x);i<(y);i++)
#define FORN(i,x,y) for(int i=(x);i<=(y);i++)
#define REV(i,a,b) for(int i=(a);i>(b);i--)
#define REVN(i,a,b) for(int i=(a);i>=(b);i--)

#define al_(x) (x).begin(), (x).end()
#define ln_(x) ((string)(x).length())
#define sz(x) ((int)(x).size())
#define endl "\n"

const double PI = acos(-1);

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a,b,c,d,r;
	cin>>a>>b;
	int ai[a][b];
	FOR(i,0,a){
		FOR(j,0,b){
			ai[i][j]=0;
			cin>>ai[i][j];
		}
	}
	cin>>c>>d;
	int bi[c][d+1];
	FOR(i,0,c){
		FOR(j,0,d){
			bi[i][j]=0;
			cin>>bi[i][j];
		}
	}
	FOR(i,0,a){
		FOR(j,0,d){
			r=0;
			FOR(k,0,b){
				r+=ai[i][k]*bi[k][j];
			}
			cout<<r;
			if(j!=d-1) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}