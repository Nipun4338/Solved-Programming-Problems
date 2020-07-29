#include<bits/stdc++.h>
using namespace std;
int a,b,c,level[1000],cost[100],source,numVertex;
vector<int>v[1000],answer;
map<string,int>m;
map<int,string>m1;
vector<int>in_degree(1000,0);
queue<int>q1;

/*void topologicalSortUtil(int vertex, vector<bool> &visited, stack<int> &Stack)
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
    unordered_set<int>s(answer.begin(),answer.end());
    while(!Stack.empty())
    {
        cout << Stack.top();
        s.insert(Stack.top());
        Stack.pop();
    }
    vector<int>v3(s.begin(),s.end());
    for(int i=0; i<v3.size(); i++)
    {
        cout<<m1[v3[i]]<<endl;
    }
    cout<<endl;
}*/

void kahn()
{
    priority_queue<int>q;
    for (int i = 1; i <=numVertex; i++)
    {
        if (in_degree[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        // put vertex u (current_node) into a topological sort list;
        int current_node = q.top();
        q1.push(current_node);

        // remove this vertex u (current_node)
        q.pop();
        for (int i = 0; i < v[current_node].size(); i++)
        {
            int v1 = v[current_node][i];

            // remove all outgoing edges from this vertex u (curent_node)
            in_degree[v1]--;

            // if such removal causes vertex v to have zero incoming degree
            // Enqueue it
            if (in_degree[v1] == 0)
                q.push(v1);
        }
    }
    while(!q1.empty())
    {
        cout << m1[q1.front()];
        q1.pop();
        if(!q1.empty())
        {
            cout<<" ";
        }
    }
    cout<<"."<<endl;
}

int main()
{
    int x,c,d,e=0;
    while(cin>>numVertex)
    {
        if(cin.good())
        {
            string x1;
            e++;
            char a1[52],a2[52];
            for(int i=numVertex-1; i>=0; i--)
            {
                cin>>x1;
                m[x1]=i+1;
                m1[i+1]=x1;
            }
            cin>>x;
            for(int i=0; i<x; i++)
            {
                cin>>a1>>a2;
                v[m[a1]].push_back(m[a2]);
                in_degree[m[a2]]++;
            }
            cout<<"Case #"<<e<<": Dilbert should drink beverages in this order: ";
            kahn();
            cout<<endl;
            memset(v,0,sizeof(v));
            answer.clear();
            m.clear();
            m1.clear();
        }
    }
}
