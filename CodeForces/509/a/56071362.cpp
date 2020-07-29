/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[11][11]={0},sum=0;
    for(int i=0; i<10; i++)
    {
        b[0][i]=1;
    }
    for(int i=1; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            sum=sum+b[i-1][j];
            b[i][j]=sum;
            //cout<<sum<<endl;
        }
        sum=0;
    }
    cin>>a;
    cout<<b[a-1][a-1]<<endl;
    return 0;
}
