/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum1=0,sum2=0;
    char b[105],c[105];
    cin>>a;
    memset(b,0,105);
    memset(c,0,105);
    cin>>b;
    if(a==1)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else
    {
        for(int i=0; i<a/2; i++)
        {
            c[i]=b[i];
            if(c[i]=='1')
            {
                sum1++;
            }
            else if(c[i]=='0')
            {
                sum2++;
            }
        }
        if(sum1!=sum2)
        {
            cout<<"2"<<endl;
            for(int i=0; i<a/2; i++)
            {
                cout<<c[i];
            }
            cout<<" ";
            for(int i=a/2; i<a; i++)
            {
                cout<<b[i];
            }
            cout<<endl;
        }
        else if(sum1==sum2)
        {
            cout<<"2"<<endl;
            for(int i=0; i<(a/2)-1; i++)
            {
                cout<<c[i];
            }
            cout<<" ";
            for(int i=(a/2); i<a; i++)
            {
                cout<<b[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
