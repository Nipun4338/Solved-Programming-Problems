/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int main()
{
    ll a,b[105],sum=0,sum1=0,c=0,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        sum=sum+b[i];
    }
    c=b[0];
    sum1=b[0];
    v.push_back(1);
    for(int i=1; i<a; i++)
    {
        if(c>=b[i]*2)
        {
            sum1=sum1+b[i];
            v.push_back(i+1);
            if(sum1*2>sum)
            {
                flag=1;
                break;
            }
            flag=0;
        }
        flag=0;
    }
    //cout<<v.size()<<endl;
    if(flag==1 && a!=2)
    {
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i];
            if(i!=v.size()-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else if(a==2)
    {
        if(b[0]>b[1])
        {
            cout<<"1"<<endl<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
