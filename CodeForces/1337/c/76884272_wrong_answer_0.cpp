// CPP Program to determine level of each node
// and print level
#include <bits/stdc++.h>
using namespace std;
vector<int>v1;
map<int,int>deg;
vector< pair<int,int>>v;
// function to determine level of each node starting
// from x using BFS
void printLevels(vector<int> graph[], int V, int x)
{
	// array to store level of each node
	int level[V];
	bool marked[V];

	// create a queue
	queue<int> que;

	// enqueue element x
	que.push(x);

	// initialize level of source node to 0
	level[x] = 0;

	// marked it as visited
	marked[x] = true;

	// do until queue is empty
	while (!que.empty()) {

		// get the first element of queue
		x = que.front();

		// dequeue element
		que.pop();

		// traverse neighbors of node x
		for (int i = 0; i < graph[x].size(); i++) {
			// b is neighbor of node x
			int b = graph[x][i];

			// if b is not marked already
			if (!marked[b]) {

				// enqueue b in queue
				que.push(b);

				// level of b is level of x + 1
				level[b] = level[x] + 1;

				// mark b
				marked[b] = true;
			}
		}
	}

	// display all nodes and their levels
	for (int i = 0; i < V; i++)
		v1.push_back(level[i]);

    /*cout << "Nodes"
         << "    "
         << "Level" << endl;
    for (int i = 0; i < V; i++)
        cout << " " << i << "   -->   " << level[i] << endl;*/
}

// Driver Code
int main()
{
	// adjacency graph for tree
	int V, a, b,c;
	cin>>V>>a;
	vector<int> graph[V],v2;
	set<int>s;
    for(int i=0; i<V-1; i++)
    {
        cin>>b>>c;
        graph[b-1].push_back(c-1);
        graph[c-1].push_back(b-1);
        deg[b-1]++;
        deg[c-1]++;
        v.push_back(make_pair(b-1,c-1));
    }
	/*graph[0].push_back(1);
	graph[0].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(4);
	graph[1].push_back(5);
	graph[2].push_back(5);
	graph[2].push_back(6);
	graph[6].push_back(7); */

	// call levels function with source as 0
	printLevels(graph, V, 0);
	for(int i=0; i<V; i++)
    {
        //cout<<v[i].size()<<endl;
        if(deg[v[i].first]==1)
        {
            s.insert(v[i].first);
            //cout<<v[i]<<endl;
        }
        if(deg[v[i].second]==1)
        {
            s.insert(v[i].second);
        }
    }
    //vector<int>v2(s.begin(),s.end());
	//sort(v1.begin(), v1.end(), greater<int>());
	int sum=0;
	//cout<<v1.size()<<endl
	for(int i=0; i<v1.size(); i++)
    {
        if(s.find(i)!=s.end())
        {
            v2.push_back(v1[i]);
            //cout<<v1[i]<<endl;
        }
    }
    sort(v2.begin(),v2.end(), greater<int>());
    int check=0;
    for(int i=0; i<v2.size(); i++)
    {
        if(v2[i]>=3 && (a-check)%2!=1)
        {
            sum+=(v2[i]+1);
            check+=2;
        }
        else
        {
            sum+=v2[i];
            check+=1;
        }
        if(check>=a)
        {
            break;
        }
    }
    cout<<sum<<endl;
	return 0;
}
