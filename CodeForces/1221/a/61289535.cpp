#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,sum=0,temp=0,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<ll>v;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            if(c<=2048)
            {
                v.push_back(c);
            }
        }
        for(int j=0; j<v.size(); j++)
        {
            sum=sum+v[j];
        }
        if(sum>=2048)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        sum=0;
    }
}
