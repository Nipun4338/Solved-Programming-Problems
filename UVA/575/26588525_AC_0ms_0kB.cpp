#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b,d=1,sum=0;
    char c[1000];
    while(gets(c))
    {
        a=strlen(c);
        if(a==1 && c[0]=='0')
        {
            break;
        }
        for(int j=a-1; j>=0; j--)
        {
            b=(c[j]-'0')*(pow(2,d)-1);
            d++;
            sum=sum+b;
            b=0;
        }
        cout<<sum<<endl;
        d=1;
        sum=0;
        a=0;
    }
    return 0;
}