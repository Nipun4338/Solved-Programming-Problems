#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,l=0,d[1000],sum=0;
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
            d[l]=sum;
            l++;
        }
        else if(b[i]!='x')
        {
            sum=0;
        }
    }
    sort(d,d+l);
    if(d[l-1]>=3)
    {
        cout<<d[l-1]-2;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
