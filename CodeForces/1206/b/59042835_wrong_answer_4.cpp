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

    ll a,b,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,flag=0,sum5=0;
    vector<ll>v,v1;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<-1)
        {
            sum=sum+(abs(v[i])-1);
            v1.push_back(-1);
        }
        else if(v[i]==-1)
        {
            v1.push_back(-1);
        }
        else if(v[i]==1)
        {
            v1.push_back(1);
        }
        else if(v[i]>1)
        {
            sum=sum+v[i]-1;
            v1.push_back(1);
        }
        else if(v[i]==0)
        {
            v1.push_back(0);
        }
    }
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i]==-1)
        {
            sum1++;
        }
        else if(v1[i]==1)
        {
            sum2++;
        }
        else if(v1[i]==0)
        {
            sum3++;
        }
    }
    if(sum1>0 && sum1%2==0)
    {
        cout<<sum+sum3<<endl;
    }
    else if(sum1%2==1 && sum3==0)
    {
        cout<<sum+2<<endl;
    }
    else if(sum1%2==1 && sum3>0)
    {
        sum++;
        sum3=sum3-1;
        if(sum3>0)
        {
            sum=sum+sum3;
        }
        cout<<sum<<endl;
    }
    else if(sum1==0)
    {
        cout<<sum3<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
