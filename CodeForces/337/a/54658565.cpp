#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c[1000],l=0,f[1000];
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
    for(int i=0; i<l; i++)
    {
        if(f[i]>=0)
        {
            cout<<f[i]<<endl;
            break;
        }
    }
    return 0;
}
