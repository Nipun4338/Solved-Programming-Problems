#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a;
    string b;
    cin>>a;
    while(a--)
    {
        int flag;
        cin>>b;
        for(int i=0; i<b.size(); i++)
        {
            if(b[i]==b[b.size()-1-i])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<b<<endl;
        }
        else
        {
            int flag;
            if(b.size()==1)
            {
                cout<<-1<<endl;
            }
            else
            {
                sort(b.begin(),b.end());
                for(int i=0; i<b.size(); i++)
                {
                    if(b[i]==b[b.size()-1-i])
                    {
                        flag=0;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<b<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }
    }
}
