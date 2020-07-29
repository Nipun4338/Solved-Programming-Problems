#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c[100],d[100],e=0,flag=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c[i]>>d[i];
    }
    for(int i=0; i<a; i++)
    {
        if(b==c[i])
        {
            cout<<i+1<<endl;
            flag=0;
            break;
        }
        else if(c[i]*d[i]<=b)
        {
            cout<<i+1<<endl;
            flag=0;
            break;
        }
        else if(c[i]*d[i]<c[i+1]*d[i+1] && c[i]*d[i]%b==0)
        {
            e=i;
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<e+1<<endl;
    }
    return 0;
}
