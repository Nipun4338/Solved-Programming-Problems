#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            vector<ll>v;
            v.push_back(0);
            v.push_back(1);
            if(a>1)
            {
                for(int i=2; i<=a; i++)
                {
                    if(i%2==0)
                    {
                        v.push_back(v[i/2]);
                    }
                    else
                    {
                        v.push_back(v[i/2]+v[(i/2)+1]);
                    }
                }
            }
            sort(v.begin(),v.end());
            cout<<v[v.size()-1]<<endl;
        }
    }
}
