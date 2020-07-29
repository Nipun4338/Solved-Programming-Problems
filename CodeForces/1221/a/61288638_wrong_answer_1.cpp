#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,sum=0,temp=0,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<ll>v;
        for(int j=0; j<b; j++)
        {
            cin>>c;
            v.push_back(c);
            if(c==2048)
            {
                flag==1;
            }
        }
        sort(v.begin(),v.end());
        sum=0;
        while(true && flag!=1)
        {
            for(int j=0; j<v.size()-1; j++)
            {
                //cout<<sum<<endl;
                if(sum==2048)
                {
                    flag=1;
                    break;
                }
                else if(v[j]==v[j+1] && v[j]!=0)
                {
                    if(v[j]==2048)
                    {
                        flag=1;
                        break;
                    }
                    sum=0;
                    sum=sum+(v[j]*2);
                    temp=v[j];
                    v[j]=0;
                    v[j+1]=0;
                    v.push_back(temp*2);
                }
                sort(v.begin(),v.end());
                flag=0;
            }
            if(flag==1 || v[0]==2048)
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(flag==0)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        flag=0;
        sum=0;
    }
}
