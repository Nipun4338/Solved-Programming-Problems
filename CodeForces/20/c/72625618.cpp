/* Nipun */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF=1e18,a;
//Dijkstra's Algorithm for single source shortest paths using STL
//adjacency list implementation.

void printpath(ll parent[],ll v)
{
	//recursive function to print path.
	if(parent[v] == v)
		return;

	printpath(parent,parent[v]);
	printf("%lld ",parent[v]);
}

void addEdge(vector<pair<ll,ll> >adj[], ll src,ll dest, ll w)
{
	//Undirected Graph
	adj[src].push_back(make_pair(dest,w));
	adj[dest].push_back(make_pair(src,w));
}

void Dijkstra(vector <pair<ll, ll> >adj[],ll src,ll v)
{
	priority_queue< pair<ll, ll>, vector<pair<ll,ll> >,greater<pair<ll, ll> > > pq;
	//Using priority Queue to implement Min Heap.

	vector<ll >dist(v+1,INF);
	ll parent[v+1];
	parent[src] = src;

	pq.push(make_pair(0,src));
	dist[src] = 0;

	while(!pq.empty())
	{
		ll u = pq.top().second;
		pq.pop();

		vector <pair<ll,ll> >::iterator it;

		for(it = adj[u].begin(); it != adj[u].end(); it++)
		{
			ll v = (*it).first;
			ll w = (*it).second;

			if(dist[v] > dist[u] + w)
			{
				dist[v] = dist[u]+w;
				pq.push(make_pair(dist[v],v));
				parent[v] = u;
			}
		}
	}
	//printf("Vertex   distance from  %d       Path\n",src);
	/*for(int i=1;i<=v;i++)
	{
		//printf("%d \t\t%d  \t\t",i,dist[i]);
		//printpath(parent,i);
		//printf("%d \n",i);
	}*/
    if(dist[a]==INF)
    {
        cout<<-1<<endl;
    }
    else
    {
        printpath(parent,v);
        cout<<a<<endl;
    }

}

int main(ll argc, char const *argv[])
{
	ll b,c,d,e;
	cin>>a>>b;
	vector <pair <ll, ll> >adj[a+1];
	/*
		Using array of vectors to represent vertices.

		for example

		vector[0] contains two pairs (4,1) and (8,7)
		weight of vertex is added as a first element of a pair
		as by default min heap uses first element for comparison.

		0,7,1 are three vertex.
		4 is weight of vertex from 0 to 1
		and 8 is weight of vertex from 0 to 7

            0
          4/ \ 8
          /   \
         1    7

	*/

	/*addEdge(adj,0, 1, 4);
    addEdge(adj,0, 7, 8);
    addEdge(adj,1, 2, 8);
    addEdge(adj,1, 7, 11);
    addEdge(adj,2, 3, 7);
    addEdge(adj,2, 8, 2);
    addEdge(adj,2, 5, 4);
    addEdge(adj,3, 4, 9);
    addEdge(adj,3, 5, 14);
    addEdge(adj,4, 5, 10);
    addEdge(adj,5, 6, 2);
    addEdge(adj,6, 7, 1);
    addEdge(adj,6, 8, 6);
    addEdge(adj,7, 8, 7);*/

    for(int i=0; i<b; i++)
    {
        cin>>c>>d>>e;
        addEdge(adj,c,d,e);
    }

	Dijkstra(adj,1,a);


	/*
	output

           Vertex   distance from  1       Path
                0 		       4  		   1->0
                1 		       0  		   1
                2 		       8  		   1->2
                3 		       15  		   1->2->3
                4 		       22  		   1->2->5->4
                5 		       12  		   1->2->5
                6 		       12  		   1->7->6
                7 		       11  		   1->7
                8 		       10  		   1->2->8
	*/

	return 0;
}