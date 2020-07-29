#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,sum=0,sum1=0,flag;
    cin>>a;
    set<int>s;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        s.insert(b);
    }
    vector<int>v(s.begin(),s.end());
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        flag=0;
        int j=i+1;
        if(i==v.size()-1)
        {
            j=i-1;
        }
        for(j; j<v.size(); j++)
        {
            //cout<<__gcd(v[i],v[j])<<endl;
            //cout<<v[i]<<" "<<v[j]<<endl;
            if(__gcd(v[i],v[j])>1 && v[j]!=-1 && v[i]!=-1)
            {
                //cout<<v[i]<<" "<<v[j]<<endl;
                v[j]=-1;
                sum++;
                flag=1;
            }
            else if(v[i]==-1)
            {
                flag=1;
            }
        }
        //cout<<flag<<endl;
        if(sum>0)
        {
            sum1++;
        }
        else if(flag==0)
        {
            sum1++;
        }
        sum=0;
        //cout<<v[v.size()-1]<<endl;
    }
    cout<<sum1<<endl;
}
