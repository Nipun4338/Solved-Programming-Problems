#include<bits/stdc++.h>
using namespace std;

long long int power(long long int a,long long int b,long long int c)
{
    long long int x=0;
    if(b==1)
    {
        return a%c;
    }
    else if(b==0)
    {
        return 1;
    }
    else if(b%2==1)
    {
        return (power(a,b-1,c)*a)%c;
    }
    else
    {
        x=power(a,b/2,c);
        x=(x*x)%c;
        return x;
    }
}

int main()
{
    long long int a,b,c,d=0;
    while(cin>>a>>b>>c)
    {
        d=power(a,b,c);
        cout<<d<<endl;
        d=0;
        //cout<<endl;
    }
    return 0;
}