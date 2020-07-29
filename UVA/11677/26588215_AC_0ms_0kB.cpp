#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        if(a==0)
        {
            a=24;
        }
        if(c==0)
        {
            c=24;
        }
        if(a<c && b>=d)
        {
            f=abs(60-b+d);
            e=abs(a+1-c)*60;
            e=e+f;
        }
        if(a<c && b<=d)
        {
            f=abs(b-d);
            e=abs(a-c)*60;
            e=e+f;

        }
        if(a>c && b>=d)
        {
            f=abs(60-b+d);
            e=abs(23-a+c)*60;
            e=e+f;
        }
        if(a>c && b<=d)
        {
            f=abs(b-d);
            e=abs(24-a+c)*60;
            e=e+f;
        }
        if(a==c && b>=d)
        {
            f=abs(60-b+d);
            e=abs(23+a-c)*60;
            e=e+f;
        }
        if(a==c && b<=d)
        {
            f=abs(b-d);
            e=0;
            e=e+f;
        }
        cout<<e<<endl;
        e=0;
        f=0;
    }
    return 0;
}