/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[1005]={};
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    if(a%2==1)
    {
        cout<<b[(a/2)]<<endl;
    }
    else
    {
        cout<<b[(a/2)-1]<<endl;
    }
    return 0;
}
