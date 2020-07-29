#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,l=0,d[1000],sum=0,sum1=0;
    char b[105];
    cin>>a;
    getchar();
    gets(b);
    c=strlen(b);
    for(int i=0; i<c; i++)
    {
        if(b[i]=='x')
        {
            sum++;
        }
        else if(b[i]!='x')
        {
            d[l]=sum;
            l++;
            sum=0;
        }
    }
    sort(d,d+l);
    for(int j=0; j<l; j++)
    {
        if(d[j]>=3)
        {
            sum1=sum1+d[j]-2;
        }
        else
        {
            sum1=0;
        }
    }
    cout<<sum1<<endl;
    return 0;
}
