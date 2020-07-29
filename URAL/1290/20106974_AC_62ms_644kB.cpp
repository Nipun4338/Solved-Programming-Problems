#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    vector<int> v;
    v.clear();
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1; i>=0; i--)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
