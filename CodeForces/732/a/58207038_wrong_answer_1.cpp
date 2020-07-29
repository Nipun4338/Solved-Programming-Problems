/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d=0,e;
    cin>>a>>b;
    c=a%10;
    for(int i=1; i<=1000; i++)
    {
        e=c*i;
        if(e>=10 && e%10==b)
        {
            d=i;
            break;
        }
        else if(e%10==0)
        {
            d=i;
            break;
        }
    }
    cout<<d<<endl;
}

