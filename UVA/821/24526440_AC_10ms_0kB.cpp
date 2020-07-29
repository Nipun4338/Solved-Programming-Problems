#include<bits/stdc++.h>
using namespace std;
int a,b,c,level[1000];
vector<int>v[1000];

void bfs(int source)
{
    queue<int> Q;
    Q.push(source);
    level[source]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int V=v[u][i];
            if(level[V]==-1)
            {
                level[V]=level[u]+1;
                Q.push(V);
            }
        }
    }
}

int main()
{
    int a,b,c,d,t=0;
    while(true)
    {
        cin>>c>>d;
        if(c+d!=0)
        {
            t++;
            v[c].push_back(d);
            set<int>s;
            double sum=0;
            while(true)
            {
                cin>>c>>d;
                if(c+d==0)
                {
                    break;
                }
                v[c].push_back(d);
                s.insert(c);
                s.insert(d);
                //v[d].push_back(c);
            }
            double counter=0;
            vector<int>s1(s.begin(),s.end());
            for(int i=0; i<s.size(); i++)
            {
                memset(level,-1,sizeof(level));
                bfs(s1[i]);
                for(int j=0; j<s.size(); j++)
                {
                    sum=sum+level[s1[j]];
                    //cout<<level[j]<<endl;
                    if(level[s1[j]]>0)
                    {
                        counter++;
                    }
                }
            }
            double x=sum/counter;
            printf("Case %d: average length between pages = %.3f clicks\n",t,x);
            memset(v,0,sizeof(v));
        }
        else
        {
            break;
        }
    }
}
