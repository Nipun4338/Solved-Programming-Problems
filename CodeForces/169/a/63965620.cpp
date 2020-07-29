#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    vector<int>v;
    while(a--)
    {
        cin>>d;
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    cout<<v[c]-v[c-1]<<endl;
}
