#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v1,v2,v3;

int main()
{
    ll a,b,c;
    ll sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v1.push_back(b);
    }
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v2.push_back(c);
    }
    for(int i=0; i<a; i++)
    {
        v3.push_back(v1[i]-v2[i]);
        if(v3[i]>=0)
        {
            //sum++;
        }
    }
    //cout<<sum<<endl;
    sort(v3.begin(),v3.end());
    for(int i=0; i<a; i++)
    {
        if(v3[i]>0)
        {
            int temp=lower_bound(v3.begin(),v3.end(),-v3[i]+1)-v3.begin();
            sum=sum+abs(temp-i);
        }
    }
    cout<<sum<<endl;
}
