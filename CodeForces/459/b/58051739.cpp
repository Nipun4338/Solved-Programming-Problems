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
    ll a,b,c,b1,b2,c1,c2;
    vector<ll> v;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    b=v[0];
    c=v[v.size()-1];
    cout<<c-b<<" ";
    b1=lower_bound(v.begin(),v.end(),b)-v.begin();
    b2=upper_bound(v.begin(),v.end(),b)-v.begin();
    c1=lower_bound(v.begin(),v.end(),c)-v.begin();
    c2=upper_bound(v.begin(),v.end(),c)-v.begin();
    b1=b2-b1;
    c1=c2-c1;
    if(b==c)
    {
        cout<<(a*(a-1))/2<<endl;
        return 0;
    }
    //cout<<b1<<" "<<c1<<endl;
    cout<<b1*c1<<endl;
}
