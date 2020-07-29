#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d=0,e=0,sum=0,sum1=0;
    cin>>a>>b>>c;
    d=a%c;
    e=b%c;
    if((c-max(d,e))<=min(d,e) && d!=0 && e!=0)
    {
        if(max(d,e)==d)
        {
            sum=(a/c)+1+(b/c);
        }
        else if(max(d,e)==e)
        {
            sum=(b/c)+1+(a/c);
        }
        sum1=3-max(d,e);
    }
    else
    {
        sum=(a/c)+(b/c);
        sum1=0;
    }
    cout<<sum<<" "<<sum1<<endl;
    return 0;
}
