#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<ll>v,v1;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
        }
        set<ll>s(v.begin(),v.end());
        int temp=v[0]+1;
        int flag1=0,flag=0;
        for(int j=0; j<b; j++)
        {
            for(int k=v[j]+1; k<=2*b; k++)
            {
                if(s.find(k)==s.end())
                {
                    v1.push_back(v[j]);
                    v1.push_back(k);
                    s.insert(k);
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                }
            }
            if(flag==0)
            {
                for(int k=1; k<=2*b; k++)
                {
                    if(k>v[j] && s.find(k)==s.end())
                    {
                        v1.push_back(v[j]);
                        v1.push_back(k);
                        s.insert(k);
                        flag=1;
                        break;
                    }
                    else
                    {
                        flag=0;
                    }
                }
            }
            if(flag==0)
            {
                flag1=1;
                break;
            }
            else
            {
                flag1=0;
            }
        }
        if(flag1==1 || v1.size()==v.size())
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int j=0; j<v1.size(); j++)
            {
                cout<<v1[j];
                if(j!=v1.size()-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}
