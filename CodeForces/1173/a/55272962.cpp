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
    else if((a==b) && c==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"?"<<endl;
    }
    return 0;
}
