#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[1000][2],b[1],flag=0;
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c[i];
    }
    //getchar();
    cin>>b;
    //getchar();
    for(int i=0; i<a; i++)
    {
        if(c[i][0]==b[0])
        {
            flag=1;
        }
        if(flag==1)
        {
            cout<<c[i][0]<<c[i][1]<<endl;
        }
        flag=0;
    }
    return 0;
}
