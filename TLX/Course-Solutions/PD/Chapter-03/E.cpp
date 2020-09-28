#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a,t,f;
	cin>>a>>t;
	f=((a*t)/2);
	cout<<fixed;
	cout<<setprecision(2)<<f<<endl;
	return 0;
}
