#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[105],sum=0,sum1=0;
    double c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        sum=sum+b[i];
    }
    c=sum/2.0;
    sort(b,b+a);
    for(int i=a-1; i>=0; i--)
    {
        sum1=sum1+b[i];
        if(sum1>c)
        {
            c=a-i;
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
