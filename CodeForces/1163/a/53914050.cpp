#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a-b;
    if(c==a)
    {
        cout<<"1"<<endl;
    }
    else if(c==0 || a==0)
    {
        cout<<"0"<<endl;
    }
    else if(c==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        if(b<=(a/2))
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
