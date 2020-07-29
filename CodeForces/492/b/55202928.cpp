#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c[1010],d[2020],l=0;
    double max=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c[i];
    }
    sort(c,c+a);
    if(c[0]==0 && c[a-1]!=b)
    {
        for(int i=0; i<a; i++)
        {
            d[l]=c[i+1]-c[i];
            l++;
        }
        d[l]=2*(b-c[a-1]);
        l++;
        sort(d,d+l);
        max=d[l-1]/2.0;
        printf("%f\n",max);
    }
    else if(c[0]!=0 && c[a-1]!=b)
    {
        for(int i=0; i<a; i++)
        {
            d[l]=c[i+1]-c[i];
            l++;
        }
        d[l]=2*c[0];
        l++;
        d[l]=2*(b-c[a-1]);
        l++;
        sort(d,d+l);
        max=d[l-1]/2.0;
        printf("%f\n",max);
    }
    else if(c[0]!=0 && c[a-1]==b)
    {
        for(int i=0; i<a; i++)
        {
            d[l]=c[i+1]-c[i];
            l++;
        }
        d[l]=2*c[0];
        l++;
        sort(d,d+l);
        max=d[l-1]/2.0;
        printf("%f\n",max);
    }
    else if(c[0]==0 && c[a-1]==b)
    {
        for(int i=0; i<a; i++)
        {
            d[l]=c[i+1]-c[i];
            l++;
        }
        sort(d,d+l);
        max=d[l-1]/2.0;
        printf("%f\n",max);
    }
    return 0;
}
