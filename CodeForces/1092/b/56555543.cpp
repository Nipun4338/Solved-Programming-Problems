/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100]={},sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    for(int i=0; i<a-1; i+=2)
    {
        sum=sum+(b[i+1]-b[i]);
    }
    cout<<sum<<endl;
    return 0;
}
