#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b[51];
    b[0]=0;
    b[1]=1;
    b[2]=2;
    b[3]=3;
    for(int i=4; i<=50; i++)
    {
        b[i]=b[i-1]+b[i-2];
    }
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            cout<<b[a]<<endl;
        }
    }
    return 0;
}
