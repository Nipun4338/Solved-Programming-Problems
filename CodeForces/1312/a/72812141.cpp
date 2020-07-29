#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
