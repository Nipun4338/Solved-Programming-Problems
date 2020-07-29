#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,e,f;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v,v1;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            c--;
            v.push_back(c);
        }
        ll pos=0;
        while(pos<b)
        {
            ll temp=min_element(v.begin()+pos,v.end())-v.begin();
            ll dhor=v[temp];
            if(pos==temp)
            {
                pos=temp+1;
            }
            else
            {
                v.erase(v.begin()+temp);
                v.insert(v.begin()+pos,dhor);
                pos=temp;
            }
        }
        for(int i=0; i<b; i++)
        {
            cout<<v[i]+1;
            if(i!=v.size()-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}
