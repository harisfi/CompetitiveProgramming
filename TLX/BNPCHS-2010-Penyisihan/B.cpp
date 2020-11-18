#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,o,j;
    vector<int> x;
    cin>>t;
    while(t--)
    {
        x.clear();
        cin>>n;
        while(n--)
        {
            cin>>o;
            x.push_back(o);
        }
        sort(x.begin(),x.end());
        j=0;
        if(x.size()==5) for(int i=4;i>-1;i--) j+=x[i];
        else for(int i=x.size()-1;i>x.size()-6;i--) j+=x[i];
        cout<<j<<endl;
    }
    return 0;
}