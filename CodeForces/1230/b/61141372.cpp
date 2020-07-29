#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,sum=0;
    string c;
    cin>>a>>b;
    getchar();
    getline(cin,c);
    if(a==1 && b==1)
    {
        cout<<"0";
    }
    else if(a==b)
    {
        for(int i=0; i<1; i++)
        {
            cout<<"1";
        }
        for(int i=1; i<a; i++)
        {
            cout<<"0";
        }
    }
    else if(b!=0)
    {
        for(int i=0; i<a; i++)
        {
            if(sum==b)
            {
                break;
            }
            if(c[i]!='1' && i==0)
            {
                c[i]='1';
                sum++;
            }
            else if(c[i]!='0' && i!=0)
            {
                c[i]='0';
                sum++;
            }
        }
        for(int i=0; i<a; i++)
        {
            cout<<c[i];
        }
    }
    else if(b==0)
    {
        for(int i=0; i<a; i++)
        {
            cout<<c[i];
        }
    }
    cout<<endl;
}
