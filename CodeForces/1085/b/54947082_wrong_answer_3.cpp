#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x=0,x1=0,x2=0;
    cin>>a>>b;
    for(int i=b; i>=1; i--)
    {
        if(a%i==0)
        {
            x=i;
            break;
        }
    }
    x1=(b*x)+(a/x);
    x2=(b*(a/x))+x;
    if(min(x1,x2)%b!=0)
    {
        cout<<min(x1,x2)<<endl;
    }
    else
    {
        cout<<max(x1,x2)<<endl;
    }
}
