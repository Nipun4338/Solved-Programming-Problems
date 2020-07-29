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
    ll a,b,c,d,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size()-1; i++)
    {
        //cout<<v[i]<<" "<<v[i+1]<<endl;
        /*while(v[i]!=0 || v[i+1]!=0)
        {
            if(v[i]==0 || v[i+1]==0)
            {
                break;
            }
            v[i]--;
            v[i+1]--;
        }*/
        if(v[i]<v[i+1])
        {
            v[i+1]=v[i+1]-v[i];
            v[i]=0;
        }
        else if(v[i]>v[i+1])
        {
            v[i]=v[i]-v[i+1];
            v[i+1]=0;
            swap(v[i],v[i+1]);
        }
        else if(v[i]==v[i+1])
        {
            v[i]=0;
            v[i+1]=0;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i]<<endl;
        sum=sum+v[i];
    }
    if(sum==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
