#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d[1005],e[105],f[1005],l=0,flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        f[i]=i+1;
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>d[i];
    }
    cin>>c;
    l=b;
    for(int i=0; i<c; i++)
    {
        cin>>e[i];
        d[l]=e[i];
        l++;
    }
    sort(d,d+l);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<l; j++)
        {
            if(f[i]==d[j])
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0 && !(b==0 && c==0 && a!=0))
    {
        cout<<"I become the guy."<<endl;
    }
    else if(flag==1 || (b==0 && c==0 && a!=0))
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
