#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x1=0,x2=0,y1=0,y2=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        if(b==1)
        {
            x1=x1+c;
            x2=x2+d;
        }
        else if(b!=1)
        {
            y1=y1+c;
            y2=y2+d;
        }
    }
    if(x1>=x2)
    {
        cout<<"LIVE"<<endl;
    }
    else
    {
        cout<<"DEAD"<<endl;
    }
    if(y1>=y2)
    {
        cout<<"LIVE"<<endl;
    }
    else
    {
        cout<<"DEAD"<<endl;
    }
    return 0;
}
