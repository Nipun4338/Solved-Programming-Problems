#include<bits/stdc++.h>
///direction array to define possible moves. Usually it contains either 4 or 8 directions
int dr[] = {0, 0, 1, -1, 1, 1, -1, -1}; //row
int dc[] = {1, -1, 0, 0, -1, 1, -1, 1}; //column

int a=1000,b=1000,c,d;
std::string table[55];
int visit[55][55];
int ans=0;

int is_valid(int i, int j)
{
    if (i < 0 || i >= a)
        return 0;
    if (j < 0 || j >= b)
        return 0;
    ///other conditions according to the problem
    return 1;
}

void dfs(int i, int j, int step)
{
    visit[i][j]=1;
    ans=std::max(ans,step);
    for (int k = 0; k < 8; k++)
    {
        int u = i + dr [k], v = j + dc [k];
        if (is_valid (u, v) && visit[u][v]==0 && table[i][j]+1==table[u][v])
            dfs (u, v, step+1);
    }
}

int main()
{
    int temp=0;
    while(std::cin>>a>>b)
    {
        temp++;
        if(a+b==0)
        {
            return 0;
        }
        else
        {
            for(int i=0; i<a; i++)
            {
                std::cin>>table[i];
            }
            memset(visit,0,sizeof visit);
            for(int i=0; i<a; i++)
            {
                for(int j=0; j<b; j++)
                {
                    if(table[i][j]=='A')
                    {
                        dfs(i,j,1);
                    }
                }
            }
            std::cout<<"Case "<<temp<<": "<<ans<<std::endl;
            ans=0;
        }
    }
}
