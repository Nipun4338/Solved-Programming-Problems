#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[100005],sum=0,c=0,flag=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        if(b[i]==i)
        {
            sum++;
        }
    }
    if(sum==a)
    {
        cout<<sum<<endl;
    }
    else
    {
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<a; j++)
            {
                if(b[i]==j && b[j]==i && i!=j)
                {
                    c=b[i];
                    b[i]=b[j];
                    b[j]=c;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            for(int i=0; i<a; i++)
            {
                if(b[i]==i)
                {
                    sum++;
                }
            }
            cout<<sum<<endl;
        }
        else
        {
            cout<<sum+1<<endl;
        }
    }
    return 0;
}
