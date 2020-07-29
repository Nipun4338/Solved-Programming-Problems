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

    ll sum=0,c,e;
    char b[1000005];
    vector<ll>v;
    for(int i=0; i<32; i++)
    {
        v.push_back(pow(4,i));
    }
    cin>>b;
    ll d=strlen(b);
    for(int i=0; i<d; i++)
    {
        c=d-i-1;
        e=b[i]-'0';
        sum=sum+(e*pow(2,c));
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
    if(d==1 && b[0]=='0')
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>=sum)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
