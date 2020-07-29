#include<bits/stdc++.h>
using namespace std;
int a,b,c,level[1000],cost[100],source,numVertex;
vector<int>v[1000];

void topologicalSortUtil(int vertex, vector<bool> &visited, stack<int> &Stack)
{
    visited[vertex] = true;

    for(int i = 0; i < v[vertex].size(); i++)
    {
        if(!visited[v[vertex][i]])
        {
            topologicalSortUtil(v[vertex][i], visited, Stack);
        }
    }

    Stack.push(vertex);
}

void topologicalSort()
{
    stack<int> Stack;
    vector<bool> visited(numVertex, false);
    for(int i = 1; i <=numVertex; i++)
    {
        if(!visited[i])
        {
            topologicalSortUtil(i, visited, Stack);
        }
    }

    while(!Stack.empty())
    {
        cout << Stack.top();
        Stack.pop();
        if(!Stack.empty())
        {
            cout<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int x,c,d;
    while(true)
    {
        cin>>numVertex>>x;
        if(numVertex+x!=0)
        {
            for(int i=0; i<x; i++)
            {
                cin>>c>>d;
                v[c].push_back(d);
            }
            topologicalSort();
            memset(v,0,sizeof(v));
        }
        else
        {
            break;
        }
    }
}
