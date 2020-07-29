#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum1=0,sum=0,l=0,flag,b[110];
    char c[105];
    cin>>a;
    getchar();
    gets(c);
    for(int i=0; i<a; i++)
    {
        if(c[i]=='B')
        {
            sum1++;
            flag=1;
        }
        else if(c[i]=='W')
        {
            if(flag==1)
            {
                sum++;
                flag=0;
                b[l]=sum1;
                sum1=0;
                l++;
            }
        }
    }
    if(flag==1)
    {
        sum++;
        flag=0;
        b[l]=sum1;
        sum1=0;
        l++;
    }
    cout<<sum<<endl;
    for(int j=0; j<l; j++)
    {
        cout<<b[j];
        if(j!=l-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
