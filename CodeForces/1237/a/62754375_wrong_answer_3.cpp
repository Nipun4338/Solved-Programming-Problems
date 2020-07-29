#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,sum=0,sum1=0;
    vector<int>v,v1;
    cin>>a;
    d=a;
    while(d--)
    {
        cin>>b;
        v.push_back(b);
    }
    for(int i=0; i<a; i++)
    {
        if(v[i]%2==0)
        {
            v1.push_back(v[i]/2);
            sum=sum+(v[i]/2);
        }
        else
        {
            v1.push_back(v[i]/2);
            sum1=sum1+(v[i]/2);
        }
    }
    if(sum+sum1!=0 && abs(sum)>abs(sum1))
    {
        for(int i=0; i<a; i++)
        {
            if(sum1+sum==0)
            {
                break;
            }
            if(v[i]%2!=0 && v[i]<0)
            {
                v1[i]--;
                sum1--;
            }
            if(v[i]%2!=0 && v[i]>0)
            {
                v1[i]++;
                sum1++;
            }
        }
    }
    else if(sum+sum1!=0 && abs(sum)<abs(sum1))
    {
        for(int i=0; i<a; i++)
        {
            if(sum1+sum==0)
            {
                break;
            }
            if(v[i]%2!=0 && v[i]<0)
            {
                v1[i]++;
                sum1++;
            }
            if(v[i]%2!=0 && v[i]>0)
            {
                v1[i]--;
                sum1--;
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        cout<<v1[i]<<endl;
    }
}
