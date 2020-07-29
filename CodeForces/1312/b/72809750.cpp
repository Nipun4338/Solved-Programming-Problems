#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<int>v;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
       
        for(int j=v.size()-1; j>=0; j--)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
}
