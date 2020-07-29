#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,sum=0,sum1=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            sum=sum+c;
        }
        sum1=sum/b;
        while(sum1*b<sum)
        {
            sum1++;
        }
        cout<<sum1<<endl;
        sum=0;
        sum1=0;
    }
}
