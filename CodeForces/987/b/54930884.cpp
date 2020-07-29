#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c=1,d=1;
    cin>>a>>b;
    c=b*log(a);
    d=a*log(b);
    //cout<<c<<" "<<d<<endl;
    /*for(int i=1; i<=b; i++)
    {
        c=c*a;
    }
    for(int i=1; i<=a; i++)
    {
        d=d*a;
    }*/
    if(c<d)
    {
        cout<<"<"<<endl;
    }
    else if(c>d)
    {
        cout<<">"<<endl;
    }
    else if(c==d)
    {
        cout<<"="<<endl;
    }
    return 0;
}
