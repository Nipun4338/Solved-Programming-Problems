#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b;
    string c;
    cin>>a>>b;
    getchar();
    getline(cin,c);
    if(a==b)
    {
        for(int i=0; i<a; i++)
        {
            cout<<"0";
        }
    }
    else
    {
        for(int i=0; i<b; i++)
        {
            if(i==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        for(int i=a-b+1; i<a; i++)
        {
            cout<<c[i];
        }
    }
    cout<<endl;
}
