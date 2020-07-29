/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c=0,d,e;
    cin>>a;
    vector<ll> v;
    //v.push_back(0);
    for(int i=1; i<=a; i++)
    {
        cin>>b;
        c=c+b;
        v.push_back(c);
    }
    cin>>e;
    for(int i=0; i<e; i++)
    {
        cin>>d;
        for(int j=0; j<v.size(); j++)
        {
            if(v[j]>=d)
            {
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}
