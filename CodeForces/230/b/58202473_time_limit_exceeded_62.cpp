/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
bool p[1000005];
bool checkPrime(long long int n)
{
    if(n==1)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    else
    {
        for(long long int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    long long int a;
    cin>>a;
    long long b,c;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=sqrt(b);
        if(c*c!=b || checkPrime(c)!=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

