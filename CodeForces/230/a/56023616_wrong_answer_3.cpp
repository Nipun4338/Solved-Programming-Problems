/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c[10005],d[10005],flag;
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c[i]>>d[i];
    }
    for(int i=0; i<b; i++)
    {
        if(c[i]<a)
        {
            flag=0;
            a=a+d[i];
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

