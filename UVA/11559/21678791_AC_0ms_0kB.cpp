#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum,sum1[18],flag;
    int a,b,c,d,e,f[13];
    while(cin>>a)
    {
        cin>>b>>c>>d;
        for(int i=0; i<c; i++)
        {
            cin>>e;
            for(int j=0; j<d; j++)
            {
                cin>>f[j];
            }
            for(int j=0; j<d; j++)
            {
                if(f[j]>=a)
                {
                    sum=(a*e);
                    break;
                }
            }
            sum1[i]=sum;
            sum=0;
        }
        sort(sum1,sum1+c);
        for(int i=0; i<c; i++)
        {
            if(sum1[i]<=b && sum1[i]>0)
            {
                cout<<sum1[i]<<endl;
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
            cout<<"stay home"<<endl;
        }
        for(int i=0; i<18; i++)
        {
            sum1[i]=0;
        }
    }
    return 0;
}