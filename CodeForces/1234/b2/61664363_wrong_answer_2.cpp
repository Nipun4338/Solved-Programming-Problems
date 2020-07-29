#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,flag=0;
    cin>>a>>b;
    vector<ll>v;
    deque<ll>q,q1;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    set<ll>s;
    for(int i=0; i<a; i++)
    {
        if(s.find(v[i])==s.end())
        {
            if(q.size()<b)
            {
                q.push_front(v[i]);
                s.insert(v[i]);
            }
            else
            {
                s.erase(s.find(q.back()));
                q.pop_back();
            }
        }
    }
    cout<<q.size()<<endl;
    for(int i=0; i<q.size(); i++)
    {
        cout<<q[i];
        if(i!=q.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
