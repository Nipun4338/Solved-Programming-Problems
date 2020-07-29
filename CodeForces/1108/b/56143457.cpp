#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[130],c=0,d[10005],l=0,e[10005],m=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    c=b[a-1];
    for(int i=0; i<a; i++)
    {
        if(b[i]==b[i+1])
        {
            d[l]=b[i];
            l++;
            i++;
        }
        else
        {
            e[m]=b[i];
            m++;
        }
    }
    sort(e,e+m);
    for(int i=0; i<m; i++)
    {
        if(c%e[i]!=0)
        {
            d[l]=e[i];
            l++;
        }
    }
    sort(d,d+l);
    cout<<c<<" "<<d[l-1]<<endl;
    return 0;
}