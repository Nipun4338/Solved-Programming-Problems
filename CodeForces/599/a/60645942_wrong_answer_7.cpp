#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int a,b,c;
    cin>>a>>b>>c;
    vector<long long int>v;
    v.push_back(a+a+b+b);
    v.push_back(a+b+c);
    v.push_back(a+b+b+a);
    v.push_back(c+b+b+c);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}
