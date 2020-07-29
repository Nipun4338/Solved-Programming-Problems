#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e,f,sum=0,g,h=0,x=0,flag;
    while(cin>>a>>b>>c)
    {
        x++;
        if(a+b+c==0)
        {
            break;
        }
        vector<long long int>v1,v2,v3;
        for(int i=0; i<a; i++)
        {
            cin>>d;
            v1.push_back(d);
        }
        //sort(v1.begin(),v1.end());
        for(int i=0; i<b; i++)
        {
            cin>>d;
            v3.push_back(d);
        }
        for(int i=0; i<b; i++)
        {
            //cin>>d;
            e=upper_bound(v2.begin(),v2.end(),v3[i])-v2.begin();
            f=lower_bound(v2.begin(),v2.end(),v3[i])-v2.begin();
            g=e-f;
            //cout<<v1[v3[i]-1]<<endl;
            //cout<<g<<endl;
            if(g!=0 && g%2==1)
            {
                sum=sum-v1[v3[i]-1];
            }
            else if(g!=0 && g%2==0)
            {
                sum=sum+v1[v3[i]-1];
            }
            else if(g==0)
            {
                sum=sum+v1[v3[i]-1];
            }
            h=max(h,sum);
            //cout<<h<<" "<<sum<<endl;
            if(sum>c)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
            v2.push_back(v3[i]);
            sort(v2.begin(),v2.end());
        }
        cout<<"Sequence "<<x<<endl;
        if(flag==1)
        {
            cout<<"Fuse was blown."<<endl;
        }
        else if(flag==0)
        {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was ";
            cout<<h<<" amperes."<<endl;
        }
        cout<<endl;
        h=0;
        sum=0;
    }

}