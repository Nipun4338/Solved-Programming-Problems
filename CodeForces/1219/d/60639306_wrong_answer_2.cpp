#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,c,sum=0,d,flag;
    cin>>a>>b;
    vector<ll>v,v1;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    cin>>d;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    ll temp=b;
    for(int i=0; i<a; i++)
    {
        if(temp<v[i])
        {
            if(temp+d<v[i])
            {
                sum=-1;
                break;
            }
            else if(temp+d>=v[i])
            {
                temp=temp+d;
                sum=sum+v1[i];
            }
        }
        else
        {
            if(i==0)
            {
                temp=b;
            }
            else if(i!=0 && v[i]>v[i-1])
            {
                temp=temp+(v[i]-v[i-1]);
            }
            //temp=v[i];
            sum=sum;
        }
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
}
