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
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    ll a,b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<ll>v;
        for(int j=0; j<b; j++)
        {
            cin>>c>>d;
            v.push_back(abs(c-d));
        }
        sort(v.begin(),v.end());
        if(v[0]==v[v.size()-1])
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        if(i!=a-1)
        {
            cout<<endl;
        }
    }
    return 0;
}
