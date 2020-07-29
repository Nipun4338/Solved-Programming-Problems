/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={},l=0,c[100005]={},flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    l=1;
    for(int i=0; i<a-2; i++)
    {
        c[l]=b[i]+b[i+2];
        l++;
    }
    c[l]=b[a-2]+b[0];
    c[0]=b[a-1]+b[1];
    l++;
    for(int i=0; i<a; i++)
    {
        //cout<<b[i]<<" "<<c[i]<<endl;
        if(b[i]<c[i])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<a; i++)
        {
            cout<<b[i];
            if(i!=a-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
