/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,flag=0;
    vector<ll>v;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
        if(b<0)
        {
            sum++;
        }
    }
    if(sum%2==0)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<0)
            {
                sum1=sum1+(abs(v[i])-1);
            }
            else if(v[i]>0)
            {
                sum1=sum1+(v[i]-1);
            }
            else
            {
                sum1++;
            }
        }
    }
    else if(sum>2)
    {
        sum4=sum/2;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<0 && flag==0)
            {
                sum1=sum1+(abs(v[i])-1);
                sum3++;
                if(sum3==sum4)
                {
                    flag=1;
                }
            }
            else if(v[i]>0)
            {
                sum1=sum1+(v[i]-1);
            }
            else
            {
                sum1++;
            }
        }
    }
    else
    {
        //sum4=sum/2;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<0)
            {
                sum1=sum1+(abs(v[i])+1);
                //sum3++;
            }
            else if(v[i]>0)
            {
                sum1=sum1+(v[i]-1);
            }
            else
            {
                sum1++;
            }
        }
    }
    cout<<abs(sum1)<<endl;
}
