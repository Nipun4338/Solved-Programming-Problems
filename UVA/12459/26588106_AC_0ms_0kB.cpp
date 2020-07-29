#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b[80];
    b[0]=1;
    b[1]=2;
    b[2]=3;
    for(int i=3; i<80; i++)
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
            cout<<b[a-1]<<endl;
        }
    }
    return 0;
}