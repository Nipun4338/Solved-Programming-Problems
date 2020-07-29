#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        if((b==1 || c==1) && (b+c+d>=3))
        {
            cout<<"1"<<endl;
        }
        else if(b>1 && c>1 && b+c+d>=3)
        {
            if(b>c)
            {
                sum=(b+c+d)/3;
                if(sum>c)
                {
                    cout<<c<<endl;
                }
                else
                {
                    cout<<sum<<endl;
                }
            }
            else if(b<=c)
            {
                sum=(b+c+d)/3;
                if(sum>=b)
                {
                    cout<<b<<endl;
                }
                else
                {
                    cout<<sum<<endl;
                }
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}
