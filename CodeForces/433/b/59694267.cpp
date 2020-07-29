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


    ll a,b,c,d,e,sum=0;
    vector<ll>v1,v2,v3;
    v1.push_back(0);
    v3.push_back(0);
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        sum=sum+b;
        v1.push_back(sum);
        //cout<<v1[i]<<endl;
        v2.push_back(b);
    }
    sort(v2.begin(),v2.end());
    sum=0;
    for(int i=0; i<v2.size(); i++)
    {
        sum=sum+v2[i];
        v3.push_back(sum);
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d>>e;
        if(c==1)
        {
            ll sum=0;
            int d1;
            if(d==1)
            {
                d1=0;
            }
            else
            {
                d1=d-1;
            }
            cout<<v1[e]-v1[d1]<<endl;
        }
        else if(c==2)
        {
            int d1;
            if(d==1)
            {
                d1=0;
            }
            else
            {
                d1=d-1;
            }
            ll sum=0;
            //cout<<accumulate(v2.begin()+d-1,v2.end()-(v1.size()-e),sum)<<endl;
            cout<<v3[e]-v3[d1]<<endl;
        }
    }
}
