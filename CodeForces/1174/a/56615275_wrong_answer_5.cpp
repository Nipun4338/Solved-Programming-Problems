/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[3005]={},sum1=0,sum2=0,flag;
    cin>>a;
    for(int i=0; i<2*a; i++)
    {
        cin>>b[i];
        if(i<a)
        {
            sum1=sum1+b[i];
        }
        if(i>=a)
        {
            sum2=sum2+b[i];
        }
    }
    if(sum1!=sum2)
    {
        for(int i=0; i<2*a; i++)
        {
            cout<<b[i];
            if(i!=(2*a)-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else
    {
        for(int i=0; i<a; i++)
        {
            if(b[i]!=b[a+i])
            {
                swap(b[i],b[a+i]);
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            for(int i=0; i<2*a; i++)
            {
                cout<<b[i];
                if(i!=(2*a)-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
