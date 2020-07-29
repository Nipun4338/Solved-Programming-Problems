#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e[10000],l=0,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        for(int j=1; j<=b; j++)
        {
            e[l]=j;
            l++;
        }
        for(int k=d; k<d+c; k++)
        {
            e[k-1]=0;
        }
        for(int m=0; m<l; m++)
        {
            sum=sum+e[m];
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
        l=0;
        sum=0;
    }
    return 0;
}