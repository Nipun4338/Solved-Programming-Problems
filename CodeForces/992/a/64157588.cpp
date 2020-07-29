#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b;
    cin>>a;
    set<ll>s;
    while(a--)
    {
        cin>>b;
        s.insert(b);
    }
    if(s.count(0)==1)
    {
        cout<<s.size()-1<<endl;
        return 0;
    }
    cout<<s.size()<<endl;
}
