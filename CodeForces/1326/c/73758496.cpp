#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{

    ll a,b,c;
    cin>>a>>b;
    deque<ll>v,v1,v2;
    pair<ll,ll>p[a+1];
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
        v1.push_back(c);
        p[i].first=c;
        p[i].second=i+1;
    }
    sort(p,p+a);
    sort(all(v));
    ll sum=0;
    for(int i=v.size()-b; i<v.size(); i++)
    {
        //v2.push_back(v[i]);
        sum=sum+v[i];
    }
    for(int i=v.size()-b; i<v.size(); i++)
    {
        v2.push_back(p[i].second);
    }
    //v2.push_front(0);
    //v2.push_back(a+1);

    sort(all(v2));
    ll temp=0,sum1=1;
    for(int i=0; i<v2.size()-1; i++)
    {
        //cout<<sum2<<endl;
        temp=v2[i+1]-v2[i];
        sum1=(sum1*temp)%998244353;
    }
    //cout<<temp<<endl;
    //cout<<sum2<<endl;

    {
        cout<<sum<<" "<<sum1<<endl;
    }
}
