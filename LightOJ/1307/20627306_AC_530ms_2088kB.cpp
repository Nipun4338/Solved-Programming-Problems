/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int main()
{
    ll a,b,c,d=0,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        for(int j=0; j<b; j++)
        {
            for(int k=j+1; k<b; k++)
            {
                d=lower_bound(v.begin(),v.end(),v[j]+v[k])-v.begin();
                //cout<<d<<endl;
                sum+=d-k-1;
            }
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
        sum=0;
        d=0;
        v.clear();
    }
    return 0;
}
