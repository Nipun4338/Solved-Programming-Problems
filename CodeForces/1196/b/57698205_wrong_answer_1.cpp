/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v,v1;
ll a,b,c,sum=0,d,sum1=0;

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
        }
        //sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            //sum=sum+v[i];
            if(v[i]%2==1)
            {
                sum1++;
                //sum=0;
                v1.push_back(i);
            }
        }
        if(sum1>=c)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<c-1; i++)
            {
                cout<<v1[i]+1;
                cout<<" ";
            }
            cout<<b<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        sum=0;
        sum1=0;
        v.clear();
    }
    return 0;
}
