/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v,v1,v2;

int main()
{
    ll a,b,c,d,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        v1.push_back(b);
    }
    sort(v1.begin(),v1.end());
    for(int i=0; i<a; i++)
    {
        if(v[i]!=v1[i])
        {
            v2.push_back(i);
        }
    }
    if(v2.size()==0)
    {
        cout<<"yes\n1 1\n";
        return 0;
    }
    c=v2[0];
    d=v2[v2.size()-1];
    for(int i=d; i>c; i--)
    {
        if(v[i]<=v[i-1])
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
        cout<<"yes"<<endl<<c+1<<" "<<d+1<<endl;
    }
    else
    {
        cout<<"no\n";
    }
    return 0;
}
