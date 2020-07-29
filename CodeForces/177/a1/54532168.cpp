#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[101][101],sum=0,c=0,x=0,y=0,z=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            cin>>b[i][j];
        }
    }
    c=a/2;
    for(int i=0; i<a; i++)
    {
        sum=sum+b[c][i];
    }
    x=0;
    y=a/2;
    z=a-1;
    for(int i=0; i<a/2; i++)
    {
        sum=sum+b[i][x]+b[i][y]+b[i][z];
        x++;
        y=y;
        z--;
    }
    x=0;
    y=a/2;
    z=a-1;
    for(int i=a-1; i>a/2; i--)
    {
        sum=sum+b[i][x]+b[i][y]+b[i][z];
        x++;
        y=y;
        z--;
    }
    cout<<sum<<endl;
    return 0;
}
