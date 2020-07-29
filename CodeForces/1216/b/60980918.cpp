#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,sum=0;
    vector<ll>v,v1,v2;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        v1.push_back(b);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0; i<v.size(); i++)
    {
        sum=sum+(v[i]*i)+1;
    }
    cout<<sum<<endl;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(v1[j]!=-1)
            {
                if(v[i]==v1[j])
                {
                    v2.push_back(j+1);
                    v1[j]=-1;
                }
            }
        }
    }
    //cout<<v2.size()<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i];
        if(i!=v2.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
