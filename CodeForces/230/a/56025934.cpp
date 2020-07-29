/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,flag,c,d;
    cin>>a>>b;
    pair<int,int> p[b];
    for(int i=0; i<b; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+b);
    for(int i=0; i<b; i++)
    {
        if(p[i].first<a)
        {
            flag=0;
            a=a+p[i].second;
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

