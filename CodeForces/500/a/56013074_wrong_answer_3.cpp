/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d[30005]={0},flag,l=0;
    cin>>a>>b;
    for(int i=0; i<b-1; i++)
    {
        cin>>c;
        d[l]=i+1+c;
        l++;
    }
    for(int i=0; i<l; i++)
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

