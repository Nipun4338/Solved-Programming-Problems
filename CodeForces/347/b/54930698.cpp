#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[100005],sum=0,flag=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        if(b[i]==i)
        {
            sum++;
        }
    }
    for(int i=0; i<a; i++)
    {
        if(b[b[i]]==i && b[i]!=i)
        {
            flag=1;
        }
    }
    if(sum==a)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum+flag+1<<endl;
    }
    return 0;
}