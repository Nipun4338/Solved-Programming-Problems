#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,e=0,flag;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            for(long long int i=1; i<sqrt(a); i++)
            {
                for(long long int j=1; j<sqrt(a); j++)
                {
                    c=pow(j,3)-pow(i,3);
                    if(c==a)
                    {
                        d=j;
                        e=i;
                        flag=0;
                        break;
                    }
                    else
                    {
                        d=0;
                        e=0;
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    break;
                }
            }
        }
        if(flag==0){
        cout<<d<<" "<<e<<endl;
        }
        else if(flag==1)
        {
            cout<<"No solution"<<endl;
        }
    }
    return 0;
}