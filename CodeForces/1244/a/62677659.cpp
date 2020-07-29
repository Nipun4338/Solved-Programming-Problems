#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,sum=0,sum1=0;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d>>e>>f;
        if(d>=b)
        {
            sum=sum+1;
        }
        else
        {
            if(b%d==0)
            {
                sum=sum+(b/d);
            }
            else
            {
                sum=sum+(b/d)+1;
            }
        }
        if(e>=c)
        {
            sum1=sum1+1;
        }
        else
        {
            if(c%e==0)
            {
                sum1=sum1+(c/e);
            }
            else
            {
                sum1=sum1+(c/e)+1;
            }
        }
        if(sum+sum1<=f)
        {
            cout<<sum<<" "<<sum1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        sum=0;
        sum1=0;
    }
}
