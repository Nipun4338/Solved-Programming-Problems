#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,sum=0,sum1=0,flag;
    cin>>a;
    vector<int>v;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=-1)
        {
            sum1++;
        }
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[j]%v[i]==0 && v[j]!=-1 && v[i]!=-1)
            {
                //cout<<v[i]<<" "<<v[j]<<endl;
                //sum++;
                v[j]=-1;
            }
        }
        //cout<<v[v.size()-1]<<endl;
    }
    cout<<sum1<<endl;
}
