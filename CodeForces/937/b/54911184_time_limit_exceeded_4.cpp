#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,flag;
    cin>>a>>b;
    for(int i=b; i>a; i--)
    {
        flag=0;
        for(int j=2; j<=a; j++)
        {
            if(i%j==0)
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
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
