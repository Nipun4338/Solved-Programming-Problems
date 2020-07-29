#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b;
        while(true)
        {
            bool ok=true;
            int cur=b;
            while(cur>0)
            {
                if(ok && cur%3==2)
                {
                    ok=false;
                }
                cur=cur/3;
            }
            if(ok)
            {
                break;
            }
            b++;
        }
        cout<<b<<endl;
    }
}
