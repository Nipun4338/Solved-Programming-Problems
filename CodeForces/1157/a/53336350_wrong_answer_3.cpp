#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0;
    cin>>a;
    if(a%10==0)
    {
        b=a+1;
        c++;
    }
    else
    {
        b=a;
    }
    while(b!=1)
    {
        if(b%10==0)
        {
            b=b/10;
            if(b%10!=0)
            {
                c++;
            }
        }
        else
        {
            b++;
            if(b%10!=0)
            {
                c++;
            }
        }
    }
    cout<<c+1<<endl;
    return 0;
}
