/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum1=0,sum2=0,j=0;
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
            sum1=0;
            sum2=0;
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
                if(sum1!=sum2)
                {
                    cout<<b[i];
                }
                else if(sum1==sum2)
                {
                    j=i;
                    break;
                }
            }
            cout<<" ";
            for(int i=j; i<a; i++)
            {
                cout<<b[i];
            }
            cout<<endl;
        }
        else if(sum1==sum2 && a==2)
        {
            cout<<"2"<<endl;
            for(int i=0; i<a-1; i++)
            {
                cout<<b[i];
            }
            cout<<" ";
            for(int i=a-1; i<a; i++)
            {
                cout<<b[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
