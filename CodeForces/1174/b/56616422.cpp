/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={},flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<a-1; i++)
    {
        if((b[i]+b[i+1])%2==1)
        {
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
        sort(b,b+a);
    }
    for(int i=0; i<a; i++)
    {
        cout<<b[i];
        if(i!=a-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
