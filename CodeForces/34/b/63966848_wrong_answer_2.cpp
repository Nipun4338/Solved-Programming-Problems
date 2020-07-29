#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,d,sum=0;
    cin>>a>>b;
    vector<int>v;
    while(a--)
    {
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<b; i++)
    {
        if(v[i]<0)
        {
            sum=sum+abs(v[i]);
        }
        else
        {
            sum=sum-v[i];
        }
    }
    cout<<sum<<endl;
}
