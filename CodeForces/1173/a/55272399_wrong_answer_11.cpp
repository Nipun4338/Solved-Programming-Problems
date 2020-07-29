#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a-c)>b)
    {
        cout<<"+"<<endl;
    }
    else if((b-c)>a)
    {
        cout<<"-"<<endl;
    }
    else if((a-c==b || b-c==a || (a+c)==(b+c)) && c!=0)
    {
        cout<<"?"<<endl;
    }
    else if((a==b) && c==0)
    {
        cout<<"0"<<endl;
    }
    return 0;
}
