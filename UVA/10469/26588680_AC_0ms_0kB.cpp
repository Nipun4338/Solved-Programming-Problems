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

    ll a,b,c,d,l=0,m=0,sum=0;
    while(cin>>a>>b)
    {
        vector<int>v,v1,v3;
        c=a;
        d=b;
        while(c!=0)
        {
            v.push_back(c%2);
            c=c/2;
            l++;
        }
        while(d!=0)
        {
            v1.push_back(d%2);
            d=d/2;
            m++;
        }
        if(l>m)
        {
            for(int i=0; i<l-m; i++)
            {
                v1.push_back(0);
            }
        }
        else if(l<m)
        {
            for(int i=0; i<m-l; i++)
            {
                v.push_back(0);
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]+v1[i]>1)
            {
                v3.push_back(0);
            }
            else
            {
                v3.push_back(v[i]+v1[i]);
            }
        }
        //cout<<l<<" "<<m<<endl;
        //sort(v3.rbegin(),v3.rend());
        for(int i=0; i<v.size(); i++)
        {
            //cout<<v[i]<<" "<<v1[i]<<endl;
            sum=sum+(v3[i]*pow(2,i));
        }
        cout<<sum<<endl;
        sum=0;
        l=0;
        m=0;
    }
}