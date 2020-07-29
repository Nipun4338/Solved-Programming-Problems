/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,d,e,f,a1=0,b1=0,a2=0,maxl=0;

int main()
{
    while(cin>>a>>b)
    {
        vector<vector<ll> > v(100005);
        ll num=a+b-1;
        if(a+b==0)
        {
            break;
        }
        for(int i=0; i<a; i++)
        {
            int l=a-i;
            for(int j=0; j<b; j++)
            {
                cin>>c;
                v[l].push_back(c);
                l++;
            }
        }
        cin>>d;
        for(int i=0; i<d; i++)
        {
            cin>>e>>f;
            maxl=-1;
            for(int j=1; j<=num; j++)
            {
                a1=lower_bound(v[j].begin(),v[j].end(),e)-v[j].begin();
                b1=upper_bound(v[j].begin(),v[j].end(),f)-v[j].begin();
                a2=b1-a1;
                maxl=max(maxl,a2);
            }
            cout<<maxl<<endl;
        }
        cout<<"-"<<endl;
    }
}
