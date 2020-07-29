#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,sum1=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        sum=sum+((i+1)*5);
        sum1++;
        if(sum+b>240)
        {
            sum1=sum1-1;
            break;
        }
    }
    cout<<sum1<<endl;
    return 0;
}
