/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
ll a,b,c,sum=0,d;

int main()
{
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        for(int i=0; i<b; i++)
        {
            cin>>d;
            v.push_back(d);
            if(d%2==1)
            {
                sum++;
            }
        }
        sort(v.begin(),v.end());
        if(sum>=c)
        {
            cout<<"YES"<<endl;
            sum--;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]%2==1)
                {
                    cout<<v[i];
                    sum--;
                }
                cout<<" ";
                if(sum==0)
                {
                    break;
                }
            }
            cout<<b<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        sum=0;
        v.clear();
    }
    return 0;
}
