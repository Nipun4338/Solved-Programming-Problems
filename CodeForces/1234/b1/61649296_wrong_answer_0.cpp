#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,flag=0;
    cin>>a>>b;
    vector<ll>v;
    deque<ll>q;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    //deque<ll>q;
    vector<ll>v1;
    //ll l=0,flag;
    for(int i=0; i<a; i++)
    {

        v1.push_back(v[i]);
        //ll x=(upper_bound(v1.begin(),v1.end(),v[i])-v1.begin())-(lower_bound(v1.begin(),v1.end(),v[i])-v1.begin());
        //cout<<x<<endl;
        for(int j=0; j<q.size(); j++)
        {
            if(v[i]!=q[j])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
            //cout<<q[l-1]<<endl;
        }
        if(flag==0)
        {
            q.push_front(v[i]);
            //cout<<v[i]<<" ";
            //l++;
        }
        if(q.size()>b)
        {
            q.pop_back();
            //l--;
        }
        flag=0;
    }
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
