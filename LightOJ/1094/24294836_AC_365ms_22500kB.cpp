#include<bits/stdc++.h>
using namespace std;
int dis[30001],vis[30001];
vector<int>v[30001],cost[30001];

void bfs(int source)
{
    queue<int> Q;
    Q.push(source);
    dis[source]=0;
    vis[source]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        int top=u;
        for(int i=0; i<v[u].size(); i++)
        {
            if(vis[v[u][i]]==0)
            {
                vis[v[u][i]]=1;
                dis[v[u][i]]=dis[top]+cost[u][i];
                Q.push(v[u][i]);
            }
        }
    }
}

int main()
{
    int a,b,c,d,e;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(int j=0; j<b-1; j++)
        {
            cin>>c>>d>>e;
            v[c].push_back(d);
            v[d].push_back(c);
            cost[c].push_back(e);
            cost[d].push_back(e);
        }
        bfs(0);
        int temp=0,temp1;
        for(int j=0; j<b; j++)
        {
            if(dis[j]>temp)
            {
                temp=dis[j];
                temp1=j;
            }
        }
        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));
        bfs(temp1);
        temp=0;
        for(int j=0; j<b; j++)
        {
            if(dis[j]>temp)
            {
                temp=dis[j];
                temp1=j;
            }
        }
        cout<<"Case "<<i+1<<": "<<temp<<endl;
        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));
        memset(v,0,sizeof(v));
        memset(cost,0,sizeof(cost));
    }
}
