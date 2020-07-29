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
        sum=d[b-1]-d[0];
        if(sum%2==0)
        {
            sum1=sum/2;
            if(sum<=c)
            {
                cout<<d[0]+sum<<endl;
            }
            else if(sum1<=c)
            {
                cout<<d[0]+sum1<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else if(sum%2!=0)
        {
            if(sum<=c)
            {
                cout<<d[0]+c<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
        d[105]={0};
        sum=0;
        sum1=0;
    }
    return 0;
}
