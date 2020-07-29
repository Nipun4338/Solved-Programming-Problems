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
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        sum=sum+b;
    }
    if(sum%a==0)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<a-1<<endl;
    }
    return 0;
}