#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0;
    cin>>a>>b;
    for(long long int i=(a*b)+1; i>=1; i--)
    {
        c=(i/b)*(i%b);
        //cout<<c<<endl;
        if(c==a && max(a,b)/min(a,b)>2)
        {
            d=i;
            break;
        }
        else if(c==a && max(a,b)/min(a,b)<=2)
        {
            d=i;
        }
    }
    cout<<d<<endl;
    return 0;
}
