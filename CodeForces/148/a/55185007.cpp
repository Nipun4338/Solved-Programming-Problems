#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,sum=0,sum1=0;
    cin>>a>>b>>c>>d>>e;
    for(int i=1; sum<e && i<=e; i++)
    {
        sum=i*a;
        if(sum<=e)
        {
            sum1++;
        }
    }
    sum=0;
    for(int i=1; sum<e && i<=e; i++)
    {
        sum=i*b;
        if(sum<=e && sum%a!=0)
        {
            sum1++;
        }
    }
    sum=0;
    for(int i=1; sum<e && i<=e; i++)
    {
        sum=i*c;
        if(sum<=e && sum%b!=0 && sum%a!=0)
        {
            sum1++;
        }
    }
    sum=0;
    for(int i=1; sum<e && i<=e; i++)
    {
        sum=i*d;
        if(sum<=e && sum%b!=0 && sum%c!=0 && sum%a!=0)
        {
            sum1++;
        }
    }
    cout<<sum1<<endl;
    return 0;
}
