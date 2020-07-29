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


    ll a,b,c,d,e;
    vector<ll>v1,v2;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v1.push_back(b);
        v2.push_back(b);
    }
    sort(v2.begin(),v2.end());
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d>>e;
        if(c==1)
        {
            ll sum=0;
            cout<<accumulate(v1.begin()+d-1,v1.end()-(v1.size()-e),sum)<<endl;
        }
        else if(c==2)
        {

            ll sum=0;
            cout<<accumulate(v2.begin()+d-1,v2.end()-(v1.size()-e),sum)<<endl;
        }
    }
}
