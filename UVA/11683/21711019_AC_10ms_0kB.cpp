#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        cin>>b;
        vector<int>v;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(abs(a-c));
        }
        int m=v[0],sum=0;
        sum=sum+v[0];
        for(int i=1; i<b; i++)
        {
            if(v[i]>m && v[i]>v[i-1])
            {
                sum=sum+(v[i]-v[i-1]);
            }
            else if(v[i]<m)
            {
                m=v[i];
            }
            /*else if(v[i]>v[i-1] && v[i]>m)
            {
                sum=sum+(v[i]-v[i-1]);
            }*/
            //cout<<sum<<endl;
        }
        /*if(v[v.size()-1]<a && m<a)
        {
            sum=sum+abs(v[v.size()-1]-a);
        }*/
        cout<<sum<<endl;
    }
}
