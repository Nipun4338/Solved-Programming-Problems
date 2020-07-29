#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    if(a%2==0)
    {
        b=a/2;
        cout<<b<<endl;
        for(int i=0; i<b; i++)
        {
            cout<<"2";
            if(i!=b-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else if(a%2==1)
    {
        b=(a/2)-1;
        cout<<b+1<<endl;
        for(int i=0; i<b; i++)
        {
            cout<<"2";
            if(i!=b-1)
            {
                cout<<" ";
            }
        }
        cout<<" 3"<<endl;
    }
    return 0;
}
