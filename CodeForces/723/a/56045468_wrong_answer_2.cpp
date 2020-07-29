/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d=0,sum=0;
    cin>>a>>b>>c;
    d=(a+b+c)/3;
    sum=abs(d-a)+abs(d-b)+abs(d-c);
    cout<<sum<<endl;
    return 0;
}
