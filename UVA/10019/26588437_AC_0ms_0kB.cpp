#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,d=0,b=0,sum1=0,e=0,f=0,sum=0,l=0,sum2=0,g=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        d=c;
        e=c;
        while(d!=0)
        {
            b=d%2;
            d=d/2;
            if(b==1)
            {
                sum1++;
            }
        }
        while(e!=0)
        {
            f=e%10;
            sum=sum+(f*pow(16,l));
            l++;
            e=e/10;
        }
        while(sum!=0)
        {
            g=sum%2;
            sum=sum/2;
            if(g==1)
            {
                sum2++;
            }
        }
        cout<<sum1<<" "<<sum2<<endl;
        l=0;
        b=0;
        d=0;
        f=0;
        g=0;
        sum=0;
        sum1=0;
        sum2=0;
    }
    return 0;
}