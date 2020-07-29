#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f[1000],g[1000],b1=0,d1=0;
    cin>>a>>b>>c>>d>>e;
    if(b>c)
    {
        b1=(a-b+1+c);
    }
    else if(b<=c)
    {
        b1=(c-b+1);
    }
    if(d<e)
    {
        d1=d+(a-e)+1;
    }
    else if(d>=e)
    {
        d1=d-e+1;
    }

    for(int i=0; i<b1; i++)
    {
        f[i]=b;
        b++;
        if(b>a)
        {
            b=1;
        }
    }
    for(int i=0; i<d1; i++)
    {
        g[i]=d;
        d--;
        if(d==0)
        {
            d=a;
        }
    }

    if(b1<=d1)
    {
        int flag;
        for(int i=0; i<b1; i++)
        {
            //cout<<f[i]<<" "<<g[i]<<endl;
            if(f[i]==g[i])
            {
                flag=1;
                break;
            }
            flag=0;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        int flag;
        for(int i=0; i<d1; i++)
        {
            if(f[i]==g[i])
            {
                flag=1;
                break;
            }
            flag=0;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
