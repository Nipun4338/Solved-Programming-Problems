/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;

int main()
{
    ll a,b,c,d=0,e=0,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        d=v[v.size()-1];
        e=v[v.size()-2];
        for(int j=0; j<v.size()-2; j++)
        {
            if(v[j]<=d && v[j]<e)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
        v.clear();
        d=0;
        e=0;
        sum=0;
    }
}
