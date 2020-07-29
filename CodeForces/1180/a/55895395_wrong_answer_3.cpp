#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,sum=1,b=4,c[105];
    c[0]=1;
    for(int i=1; i<100; i++)
    {
        sum=sum+b;
        c[i]=sum;
        b=b*2;
        //cout<<c[i]<<endl;
    }
    cin>>a;
    cout<<c[a-1]<<endl;
    return 0;
}
