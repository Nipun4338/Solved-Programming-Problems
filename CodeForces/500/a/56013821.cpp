/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,d[30005],c[40005]={0},flag,l=0;
    cin>>a>>b;
    for(int i=0; i<a-1; i++)
    {
        cin>>d[i];
    }
    c[l]=1;
    l++;
    for(int i=0; i<a-1; i++)
    {
        c[l]=d[i]+i+1;
        //cout<<c[l]<<endl;
        l++;
        i=d[i]+i-1;
    }
    for(int i=0; i<=l; i++)
    {
        if(c[i]==b)
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

