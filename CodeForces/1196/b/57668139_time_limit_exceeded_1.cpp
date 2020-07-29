/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v,v1;
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
                    v1.push_back(v[i]);
                }
            }
            for(int i=0; i<v1.size()-1; i++)
            {
                if(v1[i]<v1[i+1] && v1[i]<b)
                {
                    cout<<v1[i];
                    sum--;
                }
                cout<<" ";
                if(sum==0)
                {
                    break;
                }
            }
            /*if(b%2==1)
            {
                cout<<b<<endl;
            }*/
            //else
            {
                cout<<b<<endl;
            }
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
