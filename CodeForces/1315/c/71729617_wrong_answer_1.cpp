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
        vector<ll>v,v1,v2;
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
        flag=0;
        for(int j=0; j<v.size()-1; j++)
        {
            if(v[j]+1==v[j+1] && v.size()!=1)
            {
                cout<<-1<<endl;
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        sort(v.begin(),v.end());
        int flag2=0;
        if(flag!=1)
        {
            if(flag1==1 || v1.size()==v.size() || v[v.size()-1]>2*b)
            {
                cout<<-1<<endl;
                flag2=1;
            }
        }
        if(flag2==0 && flag==0)
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
