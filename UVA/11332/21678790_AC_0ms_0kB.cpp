#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10],c[2]={'0','\0'};
    int b=0,sum=0,sum1=0,sum2=0;
    while(cin>>a)
    {
        if(strcmp(a,c)==0)
            {break;}
        else{
            b=strlen(a);
            sum=0;
            for(int i=0; i<b; i++)
            {
                if((a[i] >= '0') && (a[i] <= '9'))
                {
                    sum=sum+(a[i]-'0');
                }
            }
            while(sum>=10)
            {
                sum1=sum/10;
                sum2=sum%10;
                sum=sum1+sum2;
            }
        cout<<sum<<endl;
        sum1=0;
        sum2=0;
        sum=0;
        b=0;
    }
    }
    return 0;

}