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

    ll a,b,c=0,sum=0,sum1=0;
    vector<ll>v;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        sum=sum+b;
    }
    c=sum;
    sort(v.begin(),v.end());
    for(int i=1; i<v.size(); i++)
    {
        sum=sum+v[i-1];
        sum1=sum1+v[i-1];
        sum=sum+c-sum1;
        //cout<<sum<<" "<<sum1<<endl;
    }
    cout<<sum<<endl;
}
