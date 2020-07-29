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
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<ll>v1;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v1.push_back(c);
        }
        d=INT_MAX;
        for(int j=b-1; j>=0; j--)
        {
            if(v1[j]>d)
            {
                sum++;
            }
            d=min(v1[j],d);
        }
        cout<<sum<<endl;
        sum=0;
    }

}
