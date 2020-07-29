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
    ll a,b,c,sum=0;
    vector<ll>v;
    cin>>a;
    for(int i=0; i<12; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0; i<12; i++)
    {
        sum=sum+v[i];
        if(sum>=a)
        {
            c=i+1;
            break;
        }
        else
        {
            c=-1;
        }
    }
    if(a==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<c<<endl;
}

