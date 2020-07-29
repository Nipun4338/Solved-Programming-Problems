/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v,v1;

int main()
{
    ll a,b,c,d,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    for(int i=0; i<a-1; i++)
    {
        if(v[i+1]>=v[i])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"yes"<<endl<<"1"<<" "<<"1"<<endl;
        return 0;
    }
    for(int i=0; i<a-1; i++)
    {
        if(v[i+1]<=v[i])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"yes"<<endl<<"1"<<" "<<a<<endl;
        return 0;
    }
    for(int i=0; i<a-1; i++)
    {
        if(v[i+1]<v[i])
        {
            v1.push_back(i);
            flag=0;
        }
        if(flag==0 && v[i+1]>=v[i])
        {
            v1.push_back(i);
            break;
        }
    }
    for(int i=0; i<v1.size(); i++)
    {
        v[v1[i]]=v[v1[v1.size()-1]];
    }
    for(int i=0; i<a-1; i++)
    {
        if(v[i+1]>=v[i])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"yes"<<endl<<v1[0]+1<<" "<<v1[v1.size()-1]+1<<endl;
        return 0;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
