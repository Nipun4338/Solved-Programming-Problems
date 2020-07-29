#include<bits/stdc++.h>
using namespace std;
int a,b,c,level[10000],visited[10000],color[10000],source;
vector<int>v[10000];
bool flag=true;

void dfs(int source)
{
    visited[source]=1;
    for(int i=0; i<v[source].size(); i++)
    {
        int y=v[source][i];
        //cost[y]=min(cost[source]+1,cost[y]);
        if(visited[y]!=1)
        {
            color[y]=!color[source];
            dfs(y);
        }
        else
        {
            if(color[y]==color[source])
            {
                flag=false;
            }
        }
    }
}
int main()
{
    int a,b,c;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        while(cin>>b)
        {
            if(b==0)
            {
                break;
            }
            else
            {
                v[i].push_back(b);
                v[b].push_back(i);
            }
        }
    }
    dfs(1);
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1; i<=a; i++)
        {
            cout<<color[i];
        }
        cout<<endl;
    }

    return 0;
}


/* ------------------------------------------------------------------------------------------------------------------------------- */
//RESULT

/*
Coloring of graph 1
Vertex 0 --->  Color 0
Vertex 1 --->  Color 1
Vertex 2 --->  Color 2
Vertex 3 --->  Color 0
Vertex 4 --->  Color 1

Coloring of graph 2
Vertex 0 --->  Color 0
Vertex 1 --->  Color 1
Vertex 2 --->  Color 2
Vertex 3 --->  Color 0
Vertex 4 --->  Color 3
*/
