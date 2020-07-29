/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll> > v();

int main()
{
    ll b=0,c=0,ans=0;
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='o')
        {
            b+=c;
        }
        else if(a[i-1]=='v')
        {
            c++;
            ans+=b;
        }
    }
    cout<<ans<<endl;
    return 0;
}
