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

    ll a,b,c,d,e1,e2,f1,f2,flag;
    vector<ll>v1,v2;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c;
        v2.push_back(c);
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            d=v1[i]+v2[j];
            e1=upper_bound(v1.begin(),v1.end(),d)-v1.begin();
            f1=lower_bound(v1.begin(),v1.end(),d)-v1.begin();
            e2=upper_bound(v2.begin(),v2.end(),d)-v2.begin();
            f2=lower_bound(v2.begin(),v2.end(),d)-v2.begin();
            if(e1-f1==e2-f2 && e1-f1==0)
            {
                e1=v1[i];
                f1=v2[j];
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    cout<<e1<<" "<<f1<<endl;
}
