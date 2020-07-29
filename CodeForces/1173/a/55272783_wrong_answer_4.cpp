#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0,d1=0,e1=0;
    cin>>a>>b>>c;
    d=max(a,c)-min(a,c);
    d1=b+c;
    e=max(b,c)-min(b,c);
    e1=a+c;
    if((a-c)>b)
    {
        cout<<"+"<<endl;
    }
    else if((b-c)>a)
    {
        cout<<"-"<<endl;
    }
    else if((d==e || (a>b && d1>a) || (b>a && e1>b)) && c!=0)
    {
        cout<<"?"<<endl;
    }
    else if((a==b) && c==0)
    {
        cout<<"0"<<endl;
    }
    return 0;
}
