#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(__gcd(b,c)!=1)
        {
            cout<<"Infinite"<<endl;
        }
        else
        {
            cout<<"Finite"<<endl;
        }
    }
}
