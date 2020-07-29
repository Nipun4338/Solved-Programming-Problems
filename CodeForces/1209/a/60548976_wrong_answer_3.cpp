#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,sum=0,sum1=0;
    cin>>a;
    vector<int>v;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    int temp=v[v.size()-1];
    for(int i=2; i<=temp; i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            if(v[j]%i==0 && v[j]!=-1)
            {
                sum++;
                v[j]=-1;
            }
        }
        //cout<<sum<<endl;
        if(sum>0)
        {
            sum1++;
        }
        sum=0;
        //cout<<v[v.size()-1]<<endl;
    }
    cout<<sum1<<endl;
}
