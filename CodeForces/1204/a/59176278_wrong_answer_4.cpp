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

    ll sum=0,c,e,sum1=0;
    char b[10005];
    vector<ll>v;
    for(int i=0; i<32; i++)
    {
        v.push_back(pow(4,i));
    }
    /*for(int i=0; i<32; i++)
    {
        cout<<v[i]<<endl;
    }*/
    cin>>b;
    ll d=strlen(b);
    for(int i=0; i<d; i++)
    {
        c=d-i-1;
        e=b[i]-'0';
        sum=sum+(e*pow(2,c));
        //cout<<c<<endl;
    }
    //cout<<sum<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=sum)
        {
            //cout<<i<<endl;
            break;
        }
        else
        {
            sum1++;
        }
    }
    cout<<sum1<<endl;
}
