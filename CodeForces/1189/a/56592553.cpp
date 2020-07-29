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
        else
        {
            cout<<"2"<<endl;
            cout<<b[0]<<" ";
            for(int i=1; i<a; i++)
            {
                cout<<b[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
