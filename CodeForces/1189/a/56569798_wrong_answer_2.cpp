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
    char b[105];
    cin>>a;
    memset(b,0,105);
    cin>>b;
    if(a==1)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else
    {
        for(int i=0; i<a; i++)
        {
            if(b[i]=='1')
            {
                sum1++;
            }
            else if(b[i]=='0')
            {
                sum2++;
            }
        }
        if(sum1!=sum2)
        {
            cout<<"1"<<endl;
            cout<<b<<endl;
        }
        else if(sum1==sum2 && a!=2)
        {
            cout<<"2"<<endl;
            for(int i=0; i<sum1-1; i++)
            {
                cout<<"1";
            }
            cout<<" ";
            for(int i=0; i<sum2; i++)
            {
                cout<<"0";
            }
            cout<<"1";
            cout<<endl;
        }
        else if(sum1==sum2 && a==2)
        {
            cout<<"2"<<endl;
            for(int i=0; i<sum1; i++)
            {
                cout<<"1";
            }
            cout<<" ";
            for(int i=0; i<sum2; i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
    }
    return 0;
}
