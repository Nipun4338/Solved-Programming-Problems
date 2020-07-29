#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0,sum=0,sum1=0,flag;
    char a[105];
    gets(a);
    b=strlen(a);
    for(int i=0; i<b; i++)
    {
        if(a[i]=='1')
        {
            sum++;
            sum1=0;
        }
        else if(a[i]=='0')
        {
            sum1++;
            sum=0;
        }
        if(sum>=7 || sum1>=7)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
