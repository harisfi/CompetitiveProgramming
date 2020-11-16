#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>l;
        if((l/1000)<2)cout<<a<<endl;
        else
        {
            l-=2000;
            cout<<(a+(b*l/100))<<endl;
        }
    }
    return 0;
}