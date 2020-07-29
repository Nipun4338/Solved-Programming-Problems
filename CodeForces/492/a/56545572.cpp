/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b[1005]={},sum=0,j=0,sum1=0;
    b[0]=0;
    for(int i=1; i<=1000; i++)
    {
        sum=sum+i;
        b[i]=sum;
        //cout<<b[i]<<endl;
    }
    cin>>a;
    for(int i=1; i<=1000; i++)
    {
        sum1=sum1+b[i];
        if(a<sum1)
        {
            j=i;
            break;
        }
    }
    cout<<j-1<<endl;
    return 0;
}
