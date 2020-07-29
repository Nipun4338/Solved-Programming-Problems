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
    ll a,b,c,sum=0;
    cin>>a>>b>>c;
    sum=c*2;
    if(abs(a-b)==1)
    {
        sum=sum+a+b;
    }
    else if(a==b)
    {
        sum=sum+a+b;
    }
    else
    {
        sum=sum+min(a,b)+min(a,b)+1;
    }
    cout<<sum<<endl;
}

