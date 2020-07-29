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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d;
    cin>>a>>b;
    vector<ll>v1,v2,v3;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    for(int i=0; i<b; i++)
    {
        cin>>c;
        v2.push_back(c);
    }
    sort(v1.begin(),v1.end());
    for(int i=0; i<b; i++)
    {
        c=upper_bound(v1.begin(),v1.end(),v2[i])-v1.begin();
        v3.push_back(c);
    }
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i];
        if(i!=v3.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
