#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a;
    string b;
    cin>>a;
    cin>>b;
    multiset<char>s;
    for(int i=0; i<b.size(); i++)
    {
        s.insert(b[i]);
    }
    sort(b.begin(),b.end());
    vector<char>v(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s.count(v[i])>1)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
