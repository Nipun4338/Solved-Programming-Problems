/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={0},sum=0;
    long double c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
    }
    if(a%2==0)
    {
        for(int i=0; i<a/2; i++)
        {
            b[i]=1;
        }
        for(int i=a/2; i<a; i++)
        {
            b[i]=-1;
        }
    }
    else if(a%2==1)
    {
        for(int i=0; i<=a/2; i++)
        {
            b[i]=1;
        }
        for(int i=(a/2)+1; i<a-1; i++)
        {
            b[i]=-1;
        }
        b[a-1]=-2;
    }
    for(int i=0; i<a; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
