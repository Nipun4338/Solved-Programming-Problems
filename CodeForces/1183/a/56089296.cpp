/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0,sum=0,sum1=0,sum2=0;
    cin>>a;
    b=a;
    while(a!=0)
    {
        sum=sum+a%10;
        a=a/10;
    }
    if(sum%4==0)
    {
        cout<<b<<endl;
    }
    else
    {
        /*sum2=sum/4;
        sum1=(sum2+1)*4;
        sum=sum1-sum;
        cout<<b+sum<<endl;*/
        for(int i=b; i<=1200; i++)
        {
            a=i;
            sum=0;
            while(a!=0)
            {
                sum=sum+a%10;
                a=a/10;
            }
            if(sum%4==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
