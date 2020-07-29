/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d[30005]={0},flag,l=0;
    cin>>a>>b;
    for(int i=0; i<a-1; i++)
    {
        cin>>c;
        d[l]=i+1+c;
        l++;
    }
    d[l]=1;
    for(int i=0; i<=l; i++)
    {
        if(d[i]==b)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

