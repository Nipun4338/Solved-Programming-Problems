#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,d=0;
    cin>>a>>b;
    c=(a*(a+1))/2;
    if(c<=b)
    {
        d=b%c;
        for(int i=1; i<=a; i++)
        {
            if(d>=i)
            {
                d=d-i;
            }
            else
            {
                break;
            }
        }
        cout<<d<<endl;
    }
    else
    {
        for(int i=1; i<=a; i++)
        {
            if(b>=i)
            {
                b=b-i;
            }
            else
            {
                break;
            }
        }
        cout<<b<<endl;
    }
}
