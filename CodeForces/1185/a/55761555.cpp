#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,a1[3],ans=0;
    cin>>a>>b>>c>>d;
    a1[0]=max(a,c)-min(a,c);
    a1[1]=max(b,c)-min(b,c);
    a1[2]=max(a,b)-min(a,b);
    sort(a1,a1+3);
    if(a1[1]>=d)
    {
        ans=ans;
    }
    if(a1[1]<d)
    {
        ans=ans+(d-a1[1]);
    }
    if(a1[0]>=d)
    {
        ans=ans;
    }
    if(a1[0]<d)
    {
        ans=ans+(d-a1[0]);
    }
    cout<<ans<<endl;
    return 0;
}
