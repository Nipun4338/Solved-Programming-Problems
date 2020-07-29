/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[105],sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int i=1; i<a-1; i++)
    {
        if(b[i-1]==1 && b[i]==0 && b[i+1]==1)
        {
            sum++;
            b[i+1]=2;
            b[i]=2;
            b[i-1]=2;
        }
    }
    cout<<sum<<endl;
    return 0;
}

