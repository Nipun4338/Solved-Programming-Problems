#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c[30002],sum=0,l=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c[j];
        }
        sort(c,c+b);
        if(b%2==1)
        {
            l=c[b/2];
        }
        else if(b%2==0)
        {
            l=c[b/2]+c[(b/2)-1];
            l=l/2;
        }
        for(int j=0; j<b; j++)
        {
            sum=sum+abs(l-c[j]);
        }
        cout<<sum<<endl;
        sum=0;
        l=0;
    }
    return 0;
}