#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>=a)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<a-b<<" ";
        for(int i=1; i<a-b; i++)
        {
            cout<<i<<" ";
        }
        for(int j=a-b+1; j<=a; j++)
        {
            cout<<j;
            if(j!=a)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
