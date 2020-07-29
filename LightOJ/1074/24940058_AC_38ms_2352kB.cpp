// C++ implementation of SPFA

#include <bits/stdc++.h>
using namespace std;


// Driver code
int main()
{
    int a,V,S=1,c,e,d1;
    scanf("%d",&a);
    vector <pair <int, int> > g[205];
    for(int j=0; j<a; j++)
    {
        scanf("%d",&V);

        int cost[V+1];
        for(int i=1; i<=V; i++)
        {
            scanf("%d",&cost[i]);
        }
        scanf("%d", &c);
        //memset(g,INT_MAX,sizeof(g));
        for(int i=0; i<c; i++)
        {
            scanf("%d %d",&d1,&e);
            int temp=cost[e]-cost[d1];
            g[d1].push_back(make_pair(e,temp*temp*temp));

        }

        queue <int> q;
        q.push(1);

        vector<int>d(V + 1,205);
        vector<bool>inQueue(V + 1, false);
        vector<int>cycle(V+1, 0),num(V+1,0);

        for (int i = 1; i <= V; ++i)
        {
            d[i] = INT_MAX;
            inQueue[i] = false;
        }

        d[1] = 0;
        inQueue[1] = true;
        num[1]=1;

        while (!q.empty())
        {
            int v = q.front();
            // cerr << v << " ";
            q.pop();
            inQueue[v] = false;

            for (int i = 0; i < (int)g[v].size(); ++i)
            {
                int to = g[v][i].first, w = g[v][i].second;
                if(cycle[to])
                {
                    continue;
                }
                if (d[to] > d[v] + w)
                {
                    d[to] = d[v] + w;

                    if (!inQueue[to])
                    {
                        q.push(to);
                        inQueue[to] = true;
                        
                    }
                    num[to]++;
                    if(num[to]>V)
                    {
                        cycle[to]=1;
                    }
                }
            }
        }
        /*for (int i = 1; i <= V; ++i)
            cout << d[i] << " ";*/
        scanf("%d",&e);
        printf("Case %d:\n",j+1);
        while(e--)
        {
            scanf("%d",&d1);
            if(d[d1]<3 || d[d1]==INT_MAX)
            {
                printf("?\n");
            }
            else
            {
                printf("%d\n",d[d1]);
            }
        }
        for(int i=1; i<=V; i++)
        {
            g[i].clear();
        }

    }
    return 0;
}