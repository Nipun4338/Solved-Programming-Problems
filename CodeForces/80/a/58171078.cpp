/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v,v1,v2;

bool checkPrime(int p)
{
    if(p==1)
    {
        return false;
    }
    else if(p==2)
    {
        return true;
    }
    else
    {
        for(int i=2; i*i<=p; i++)
        {
            if(p%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    ll a,b,c;
    cin>>a>>b;
    for(int i=a+1; i<=100; i++)
    {
        if(checkPrime(i))
        {
            c=i;
            break;
        }
    }
    if(b==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
