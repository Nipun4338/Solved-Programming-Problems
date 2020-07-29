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
        //sort(v.begin(),v.end());
        if(sum>=c)
        {
            cout<<"YES"<<endl;
            c--;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]%2==1)
                {
                    cout<<i+1;
                    c--;
                    if(c!=-1)
                    {
                        cout<<" ";
                    }
                }
                if(c==0)
                {
                    break;
                }
                //cout<<c<<endl;
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
