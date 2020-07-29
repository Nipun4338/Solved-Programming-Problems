/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d=0,flag;
    cin>>a>>b>>c;
    for(int i=1; i<=10000; i++)
    {
        a=a*10;
        if(a/b==c)
        {
            flag=1;
            d=i;
            break;
        }
        else
        {
            flag=0;
        }
        a=a%b;
    }
    if(flag==1)
    {
        cout<<d<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
