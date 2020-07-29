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

    ll a,b,c,d,e;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        cin>>b>>c;
        for(int i=0; i<a; i++)
        {
            cin>>d>>e;
            if(d==b || e==c)
            {
                cout<<"divisa"<<endl;
            }
            else if(d>b && e>c)
            {
                cout<<"NE"<<endl;
            }
            else if(d<b && e>c)
            {
                cout<<"NO"<<endl;
            }
            else if(d<b && e<c)
            {
                cout<<"SO"<<endl;
            }
            else if(d>b && e<c)
            {
                cout<<"SE"<<endl;
            }
        }
    }
    return 0;
}