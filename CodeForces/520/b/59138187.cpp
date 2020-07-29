/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d,e,sum=0;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a-b<<endl;
    }
    else if(a==b)
    {
        cout<<"0"<<endl;
    }
    else
    {
        while(true)
        {
            if(b<=a)
            {
                sum=sum+(a-b);
                break;
            }
            else if(b%2==0 && b>a)
            {
                b=b/2;
                sum++;
            }
            else if(b%2==1 && b>a)
            {
                b++;
                sum++;
            }
            //sum++;
            //cout<<b<<endl;
        }
        cout<<sum<<endl;
    }
}
