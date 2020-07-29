#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);

int main()
{
    fast
    ll a,b,c,d,sum=1;
    cin>>a>>b;
    vector<ll>v;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    int flag=0;
    //cout<<v.size()<<endl;
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            sum=sum*abs(v[i]-v[j])%b;
            if(sum==0)
            {
                flag=1;
                break;
            }
            //cout<<v[i]<<" "<<v[j]<<endl;
        }
        if(flag)
        {
            break;
        }
    }
    cout<<sum<<endl;
}
