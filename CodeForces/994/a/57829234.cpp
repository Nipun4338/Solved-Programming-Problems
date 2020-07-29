/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c,e,f,a1=0,b1=0,a2=0,b2=0;
vector<ll> v1,v2;

int main()
{
    ll a,b,flag;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    for(int j=0; j<b; j++)
    {
        cin>>c;
        v2.push_back(c);
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(v1[i]==v2[j])
            {
                cout<<v1[i];
                v2[j]=-1;
                v1[i]=-1;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<" ";
            flag=0;
        }
    }
    cout<<endl;
}
