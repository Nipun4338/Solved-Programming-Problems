/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[100005]={0},flag=0,sum=0,sum1=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<a; i++)
    {
        if(b[i]>0)
        {
            flag=1;
            sum+=b[i];
        }
        else if(b[i]==-1 && flag==1)
        {
            sum--;
        }
        else if(b[i]==-1 && flag==0)
        {
            sum1++;
        }
        if(sum<0)
        {
            flag=0;
            sum1++;
            sum=0;
        }
        //cout<<sum<<" "<<sum1<<endl;
    }
    cout<<sum1<<endl;
    return 0;
}
