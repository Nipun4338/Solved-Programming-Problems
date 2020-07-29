#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int a,b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        string c[51];
        for(int i=0; i<b; i++)
        {
            getchar();
            cin>>c[i];
            //cout<<c[i]<<endl;
            //v[i].push_back(c);
        }
        int sum0=0,sum1=0,sum=0;
        vector<int>v1,v0;
        for(int i=0; i<b; i++)
        {
            for(int j=0; j<c[i].size(); j++)
            {
                if(c[i][j]=='1')
                {
                    sum1++;
                }
                else
                {
                    sum0++;
                }
            }
            v1.push_back(sum1);
            v0.push_back(sum0);
            //cout<<sum1<<" "<<c[i]<<endl;
            sum1=0;
            sum0=0;
        }
        //cout<<sum1<<" "<<sum0<<endl;
        vector<int>temp;
        for(int i=0; i<v1.size(); i++)
        {
            //cout<<v0[i]<<" "<<v1[i]<<endl;
            if(v1[i]==v0[i])
            {
                sum++;
            }
            if(v0[i]!=v1[i] && v0[i]!=0 && v1[i]!=0 && (v0[i]%2==0 || v1[i]%2==0))
            {
                sum++;
            }
            else
            {
                temp.push_back(i);
            }
        }
        //cout<<sum<<endl;
        for(int i=0; i<temp.size(); i++)
        {
            if(v0[i]!=v1[i] && (v0[i]==0 || v1[i]==0))
            {
                if(v0[i]==1 || v1[i]==1)
                {
                    sum++;
                }
                else if(v0[i]==0 && v0[i+1]!=0)
                {
                    sum++;
                    v0[i+1]--;
                    v1[i+1]++;
                }
                else if(v1[i]==0 && v1[i+1]!=0)
                {
                    sum++;
                    v0[i+1]++;
                    v1[i+1]--;
                }
            }
            else if(v1[i]==v0[i])
            {
                sum++;
            }
            else if(v0[i]!=v1[i] && v0[i]!=0 && v1[i]!=0 && (v0[i]%2==0 || v1[i]%2==0))
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}
