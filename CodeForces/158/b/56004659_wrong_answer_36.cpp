/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=0;
    float c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        sum=sum+b;
    }
    c=sum/4.0;
    if(double(c)-(int)c>0)
    {
        cout<<(int)c+1<<endl;
    }
    else
    {
        cout<<(int)c<<endl;
    }
    return 0;
}

