/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,d[105]={0},c,sum=0,sum1=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        for(int j=0; j<b; j++)
        {
            cin>>d[j];
        }
        sort(d,d+b);
        sum=d[0]+c;
        sum1=d[b-1]-c;
        if(sum>=sum1)
        {
            cout<<d[0]+c<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        sum=0;
        sum1=0;
    }
    return 0;
}
