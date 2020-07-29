// C++ implementation of SPFA

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,V,S=1,c,e,d1,f,D;
    //scanf("%d",&a);
    vector <pair <int, int> > g[105];
    while(cin>>V>>c)
    {
        //scanf("%d",&V);
        if(V+c==0)
        {
            break;
        }
        int cost[V+1];
        //scanf("%d", &c);
        //memset(g,INT_MAX,sizeof(g));
        for(int i=0; i<c; i++)
        {
            scanf("%d %d %d",&d1,&e, &f);
            g[d1].push_back(make_pair(e,f));

        }
        queue <int> q;
        q.push(S);

        vector<int>d(V + 1,1e8);
        vector<bool>inQueue(V + 1, false);
        vector<int>cycle(V+1, 0),num(V+1,0);

        for (int i = 1; i <= V; ++i)
        {
            d[i] = INT_MIN;
            inQueue[i] = false;
        }

        d[S] = 0;
        inQueue[S] = true;
        num[S]=1;
        bool flag=false;

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
                if (d[to] < d[v] + w)
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
                        flag=true;
                        break;
                    }
                }
            }
            /*if(flag==true)
            {
                d[D]=INT_MAX;
                break;
            }*/
        }
        //cout<<flag<<endl;
        /*if(d[D]==INT_MAX || d[D]==INT_MIN )
        {
            //printf("infinity\n");
        }
        else
        {
            //printf("%d\n",d[D]);
        }*/
        int ans=0;
        int temp=INT_MIN;
        flag=false;
        for(int i=1; i<=V; i++)
        {
            if(cycle[i]==1)
            {
                flag=true;
            }
            else
            {
                //cout<<d[i]<<endl;
                temp=max(temp,d[i]);
            }
            g[i].clear();
        }
        if(flag || temp<0)
        {
            cout<<"Unlimited!"<<endl;
        }
        else
        {
            cout<<temp<<endl;
        }
    }
    return 0;
}
