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
    ll a,b,c,d,e;
    vector<ll>v,v1;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v1.push_back(b);
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    c=(upper_bound(v.begin(),v.end(),1)-v.begin())-(lower_bound(v.begin(),v.end(),1)-v.begin());
    d=(upper_bound(v.begin(),v.end(),2)-v.begin())-(lower_bound(v.begin(),v.end(),2)-v.begin());
    e=(upper_bound(v.begin(),v.end(),3)-v.begin())-(lower_bound(v.begin(),v.end(),3)-v.begin());
    ll f=min(c,min(d,e));
    cout<<f<<endl;
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(v1[j]==1)
            {
                cout<<j+1<<" ";
                v1[j]=0;
                break;
            }
        }
        for(int j=0; j<a; j++)
        {
            if(v1[j]==2)
            {
                cout<<j+1<<" ";
                v1[j]=0;
                break;
            }
        }
        for(int j=0; j<a; j++)
        {
            if(v1[j]==3)
            {
                cout<<j+1<<endl;
                v1[j]=0;
                break;
            }
        }
    }
}

