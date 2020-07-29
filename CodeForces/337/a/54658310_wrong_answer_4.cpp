#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c[55],l=0,f[55];
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c[i];
    }
    sort(c,c+b);
    for(int i=0; i<b-1; i++)
    {
        f[l]=c[i+a-1]-c[i];
        l++;
    }
    sort(f,f+l);
    if(f[0]<0)
    {
        f[0]=0;
    }
    cout<<f[0]<<endl;
    return 0;
}
