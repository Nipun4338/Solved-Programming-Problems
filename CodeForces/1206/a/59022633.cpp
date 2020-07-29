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

    ll a,b,c,d,e1,e2,f1,f2,flag,flag1;
    ll c1[300],c2[300];
    vector<ll>v1,v2;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c1[i];
        //v1.push_back(c);
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c2[i];
        //v2.push_back(c);
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            d=c1[i]+c2[j];
            for(int k=0; k<a; k++)
            {
                if(d!=c1[k])
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                for(int k=0; k<b; k++)
                {
                    if(d!=c2[k])
                    {
                        flag1=0;
                    }
                    else
                    {
                        flag1=1;
                        break;
                    }
                }
            }
            if(flag1==0 && flag==0)
            {
                e1=c1[i];
                f1=c2[j];
                break;
            }
            //cout<<e1<<" "<<f1<<endl;
            if(flag1==0 && flag==0)
            {
                break;
            }
        }
    }
    cout<<e1<<" "<<f1<<endl;
}
