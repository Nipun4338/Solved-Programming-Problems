/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={};
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    if(a>=2 && (b[0]+b[1])%2==1)
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
