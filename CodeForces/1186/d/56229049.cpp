/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={0},d[100005],e[100005],sum=0;
    long double c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        d[i]=ceil(c);
        e[i]=floor(c);
        sum=sum+d[i];
    }
    for(int i=0; i<a; i++)
    {
        if(sum>0)
        {
            cout<<e[i]<<endl;
            sum=sum-(d[i]-e[i]);
        }
        else
        {
            cout<<d[i]<<endl;
        }
    }
    return 0;
}
