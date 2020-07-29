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
        set<ll>s;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            s.insert(c);
        }
        vector<int>v(s.begin(),s.end());
        cout<<v.size()<<endl;
    }
}
