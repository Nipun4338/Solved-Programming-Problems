/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b[100005],c,sum=0;
    cin>>a>>c;
    for(int i=0; i<c; i++)
    {
        cin>>b[i];
    }
    sum=b[0]-1;
    for(int i=0; i<c-1; i++)
    {
        if(b[i]<=b[i+1])
        {
            sum=sum+b[i+1]-b[i];
        }
        else
        {
            sum=sum+a-b[i]+b[i+1];
        }
    }
    cout<<sum<<endl;
    return 0;
}

