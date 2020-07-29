#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[1010],c[1010],d[1010]={0},l=0,e=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i]>>c[i];
    }
    for(int i=0; i<a-1; i++)
    {
        e=d[l]+(c[i]-b[i+1]);
        if(e<0)
        {
            e=0;
        }
        else
        {
            e=e;
        }
        d[l]=e+c[i+1];
        e=0;
        l++;
    }
    sort(d,d+l);
    cout<<d[l-1]<<endl;
    return 0;
}
