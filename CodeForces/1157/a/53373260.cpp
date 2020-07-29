#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a;
    b=a;
    while(b>9)
    {
        b++;
        while(b%10==0)
        {
            b=b/10;
        }
        sum++;
    }
    sum+=9;
    cout<<sum<<endl;
    return 0;
}
