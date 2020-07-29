#include<bits/stdc++.h>
using namespace std;
int a,b,c,level[100],visited[20001],cost[100],source;
vector<int>v[20001];
int x=0,flag=0;

void dfs(int source)
{
    visited[source]=1;
    for(int i=0; i<v[source].size(); i++)
    {
        int y=v[source][i];
        //cost[y]=min(cost[source]+1,cost[y]);
        if(visited[y]!=1)
        {
            dfs(y);
        }
        else
        {
            flag=1;
            break;
        }
    }
}

int main()
{
    memset(level,-1,sizeof(level));

    for(int i=0; i<100; i++)
    {
        cost[i]=INT_MAX;
    }

    int a,b,c,d;
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        v[c].push_back(d);
    }
    //cost[source]=0;
    dfs(1);
    int x=0,y=0;
    if(flag==0)
    {
        for(int i=1; i<=a; i++)
        {
            if(visited[i]!=1)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}