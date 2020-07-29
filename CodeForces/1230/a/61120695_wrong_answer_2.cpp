#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b==c+d || a+c==b+d || a+d==b+c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
