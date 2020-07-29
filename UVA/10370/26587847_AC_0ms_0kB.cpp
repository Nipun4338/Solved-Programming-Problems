#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c[1000],d=0,sum=0;
    float sum1=0,sum2=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c[j];
            sum=sum+c[j];
        }
        sum1=sum*1.0/b;
        for(int j=0; j<b; j++)
        {
            if(c[j]>sum1)
            {
                d++;
            }
        }
        sum2=(d*1.0/b)*100;
        printf("%.3f%%\n",sum2);
        sum=0;
        d=0;
        sum2=0;
    }
    return 0;

}