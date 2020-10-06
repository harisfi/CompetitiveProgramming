#include <iostream>
using namespace std;

int reverse(int x) {
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp /= 10;
    }
    return ret;
}

int main() {
	int a,b;
	cin>>a>>b;
	a=reverse(a);
	b=reverse(b);
	a+=b;
	a=reverse(a);
	cout<<a<<endl;
	return 0;
}