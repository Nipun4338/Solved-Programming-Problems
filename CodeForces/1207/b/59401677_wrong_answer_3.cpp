/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c[55][55],d[55][55];
    vector<int> v1,v2;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=0; i<a-1; i++)
    {
        for(int j=0; j<b-1; j++)
        {
            if(c[i][j] && c[i][j+1] && c[i+1][j] && c[i+1][j+1])
            {
                d[i][j]=1;
                d[i+1][j]=1;
                d[i][j+1]=1;
                d[i+1][j+1]=1;
                v1.push_back(i+1);
                v2.push_back(j+1);
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(c[i][j]!=d[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
    return 0;
}
