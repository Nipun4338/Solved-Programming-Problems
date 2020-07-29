#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{
    ll a;
    cin>>a;
    ll b;
    while(a--)
    {
        cin>>b;
        if(b==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<'4';
            for(int i=1; i<b; i++)
            {
                cout<<'9';
            }
            cout<<endl;
        }
    }
}
