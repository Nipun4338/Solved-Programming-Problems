#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int a,b,c,d,e,e1,sum=0,flag=0;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        cin>>b;
        vector<int>v;
        for(int i=0; i<a; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<b; i++)
        {
            cin>>c>>d;
            for(int j=0; j<c; j++)
            {
                cin>>e;
                e1=(upper_bound(v.begin(),v.end(),e)-v.begin())-(lower_bound(v.begin(),v.end(),e)-v.begin());
                if(e1==1)
                {
                    sum++;
                }
                //cout<<e1<<endl;
            }
            //cout<<sum<<endl;
            if(sum>=d && flag!=1)
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
            sum=0;
        }
        if(flag==1)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
        flag=0;
    }
}
