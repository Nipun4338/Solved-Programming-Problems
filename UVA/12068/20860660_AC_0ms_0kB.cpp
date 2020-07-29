/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int b=0,c1,e,flag;
vector<ll>v;
ll Gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

int Lcm(int a, int b)
{
    return ((a/Gcd(a,b))*b);
}

int gcd(vector<int>v,int n)
{
    int c=0;
    b=0;
    for(int i=0; i<n-1; i++)
    {
        c=abs(max(v[i],v[i+1])-min(v[i],v[i+1]));
        b=Gcd(b,c);
    }
    return b;
    b=0;
    c=0;
}

int main()
{
    ll a,b,c,d=1,e=0,f=0;;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            d=d*c;
            v.push_back(c);
        }
        for(int j=0; j<v.size(); j++)
        {
            e=e+(d/v[j]);
        }
        d=d*b;
        f=Gcd(e,d);
        cout<<"Case "<<i+1<<": "<<d/f<<"/"<<e/f<<endl;
        d=1;
        e=0;
        f=0;
        v.clear();
    }
}
