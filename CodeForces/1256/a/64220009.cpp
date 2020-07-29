#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,e,f;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d>>e;
        f=e%d;
        if((f<=c && (e/d)<=b) || (c>=e) || (d==e) || ((b*d)<=e && ((b*d)+c)>=e))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
