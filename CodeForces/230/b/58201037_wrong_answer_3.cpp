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
        p[n]= false;
    }
    else if(n==2)
    {
        p[n]= true;
    }
    else
    {
        for(long long int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                p[i]= false;
            }
        }
        p[n]= true;
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
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else if(c*c!=b || p[c])
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

