/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
set<ll>s;

int main()
{
    ll a,b,c,d,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        s.insert(b);
    }
    sort(v.begin(),v.end());
    std::vector<ll> v1(s.begin(), s.end());
    for(int i=0; i<v1.size(); i++)
    {
        c=upper_bound(v.begin(),v.end(),v1[i])-v.begin();
        d=lower_bound(v.begin(),v.end(),v1[i])-v.begin();
        if((c-d)%2==0)
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
}
