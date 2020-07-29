#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,sum=0;
    while(cin>>a)
    {
        for(long long int i=1; i<=a; i++)
        {
            sum=sum+(i*i*i);
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
