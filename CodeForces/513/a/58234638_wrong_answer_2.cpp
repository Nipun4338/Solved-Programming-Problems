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
    ll a,b,c,d,a1,b1;
    cin>>a>>b>>c>>d;
    a1=c-1;
    b1=d-1;
    if(a==b)
    {
        if(a1>b1)
        {
            cout<<"First"<<endl;
            return 0;
        }
        cout<<"Second"<<endl;
    }
    else if(a>b)
    {
        if(a1>=b1)
        {
            cout<<"First"<<endl;
            return 0;
        }
        cout<<"Second"<<endl;
    }
    else if(a<b)
    {
        if(a1>b1)
        {
            cout<<"First"<<endl;
            return 0;
        }
        cout<<"Second"<<endl;
    }
}

