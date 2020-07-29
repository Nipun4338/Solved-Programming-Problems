#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e=0,f=0,sum=0;
    while(cin>>a>>b>>c>>d)
    {
        if(a+b+c+d==0)
        {
            break;
        }
        e=d/100.0;
        e=e*b;
        while(f>0 || f<=a)
        {
            if(sum>=1)
            {
                b=b-e;
            }
            if(b<0)
            {
                b=0;
            }
            f=f+b;
            sum++;
            //cout<<b<<" "<<f<<endl;
            if(f<0 || f>a)
            {
                break;
            }
            f=f-c;
            if(f<0 || f>a)
            {
                break;
            }
        }
        if(f>=a)
        {
            cout<<"success on day "<<sum<<endl;
        }
        else
        {
            cout<<"failure on day "<<sum<<endl;
        }
        //cout<<sum<<" "<<f<<endl;
        sum=0;
        f=0;
        b=0;
        e=0;
    }
}