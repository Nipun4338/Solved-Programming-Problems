#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d;
    cin>>a;
    vector<int>v;
    while(a--)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=v.size()-1; i>=1; i--)
    {
        if(v[i]-v[i-1]>1)
        {
            sum=sum+(v[i]-v[i-1])-1;
        }
    }
    cout<<sum<<endl;
}
