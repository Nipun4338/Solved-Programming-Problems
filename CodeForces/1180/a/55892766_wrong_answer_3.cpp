#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum=13,b=0,c[105];
    c[0]=1;
    c[1]=5;
    for(int i=2; i<100; i++)
    {
        sum=sum+b;
        c[i]=sum;
        b=4;
        //cout<<c[i]<<endl;
    }
    cin>>a;
    cout<<c[a-1]<<endl;
    return 0;
}
