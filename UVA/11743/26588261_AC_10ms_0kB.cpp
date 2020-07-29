#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,sum=0,d=0,e=0,sum1=0;
    char b[100];
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(b);
        for(int j=0; b[j]!=' '; j++)
        {
            if(j%2==0)
            {
                c=b[j]-'0';
                c=c*2;
                d=c/10;
                e=c%10;
                sum=sum+d+e;
                c=0;
                d=0;
                e=0;
            }
        }
        for(int j=5; b[j]!=' '; j++)
        {
            if(j%2==1)
            {
                c=b[j]-'0';
                c=c*2;
                d=c/10;
                e=c%10;
                sum=sum+d+e;
                c=0;
                d=0;
                e=0;
            }
        }
        for(int j=10; b[j]!=' '; j++)
        {
            if(j%2==0)
            {
                c=b[j]-'0';
                c=c*2;
                d=c/10;
                e=c%10;
                sum=sum+d+e;
                c=0;
                d=0;
                e=0;
            }
        }
        for(int j=15; b[j]!='\0'; j++)
        {
            if(j%2==1)
            {
                c=b[j]-'0';
                c=c*2;
                d=c/10;
                e=c%10;
                sum=sum+d+e;
                c=0;
                d=0;
                e=0;
            }
        }

        for(int j=1; b[j]!=' '; j++)
        {
            if(j%2==1)
            {
                c=b[j]-'0';
                sum1=sum1+c;
                c=0;
            }
        }
        for(int j=6; b[j]!=' '; j++)
        {
            if(j%2==0)
            {
                c=b[j]-'0';
                sum1=sum1+c;
                c=0;
            }
        }
        for(int j=11; b[j]!=' '; j++)
        {
            if(j%2==1)
            {
                c=b[j]-'0';
                sum1=sum1+c;
                c=0;
            }
        }
        for(int j=16; b[j]!='\0'; j++)
        {
            if(j%2==0)
            {
                c=b[j]-'0';
                sum1=sum1+c;
                c=0;
            }
        }
        sum=sum+sum1;
        if(sum%10==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
        sum=0;
        sum1=0;
    }
    return 0;
}