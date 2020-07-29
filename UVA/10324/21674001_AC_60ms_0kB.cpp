#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int a,b,c,flag,sum=0,e,sum1=0,e1,e2,e3;
    string d;
    while(cin>>d)
    {
        sum1++;
        vector<long long int>v;
        v.push_back(0);
        for(int i=0; i<d.size(); i++)
        {
            sum=sum+(d[i]-'0');
            v.push_back(sum);
        }
        cin>>a;
        flag=1;
        for(int i=0; i<a; i++)
        {
            cin>>b>>c;
            if(flag==1)
            {
                cout<<"Case "<<sum1<<":"<<endl;
                flag=0;
            }
            e1=max(b,c);
            e2=min(b,c);
            e1++;
            e2++;
            e3=v[e1]-v[e2-1];
            if(e3==0 || e3==e1-e2+1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        sum=0;
    }
    return 0;
}
