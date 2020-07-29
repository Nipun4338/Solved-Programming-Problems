#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[200002],c=0,l=0,d[200002],flag,k=0;
    for(int j=1; j<=200002; j++)
    {
        d[j-1]=j;
    }
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    int j=0;
    for(int i=0; i<a; i++)
    {
        for(j=k; j<a/2; j++)
        {
            if(d[j]<=b[i])
            {
                flag=1;
                k=j+1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}
