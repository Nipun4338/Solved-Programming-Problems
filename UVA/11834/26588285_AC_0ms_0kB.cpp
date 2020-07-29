#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0,g=0,h=0;
    while(cin>>a>>b>>c>>d)
    {
        if(a+b+c+d==0)
        {
            break;
        }
        else
        {
            e=c+d;
            f=a-e;
            g=b-e;
            h=f*f+g*g;
            if(h>=e*e && 2*max(c,d)<=min(a,b))
            {
                cout<<"S"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
            e=0;
            f=0;
            g=0;
            h=0;
        }
    }
    return 0;
}