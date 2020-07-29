#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[105],c[105],d=0,e=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        c[i]=b[i];
    }
    sort(c,c+a);
    for(int i=0; i<a; i++)
    {
        if(b[i]==c[a-1])
        {
            d=i;
            break;
        }
    }
    for(int i=a-1; i>=0; i--)
    {
        if(b[i]==c[0])
        {
            e=i;
            break;
        }
    }
    if(d==0 && e==a-1)
    {
        cout<<"0"<<endl;
    }
    else if(d>e)
    {
        cout<<d+(a-1-e-1)<<endl;
    }
    else
    {
        cout<<d+e-1<<endl;
    }
    return 0;
}
