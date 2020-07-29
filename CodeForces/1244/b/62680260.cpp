#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c1=0,c2=0,sum=0;
    string d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        cin>>d;
        for(int i=0; i<b; i++)
        {
            if(d[i]=='1')
            {
                c1=i+1;
                break;
            }
        }
        for(int i=b-1; i>=0; i--)
        {
            if(d[i]=='1')
            {
                c2=b-i;
                break;
            }
        }
        if(c1+c2==0)
        {
            cout<<b<<endl;
        }
        else
        {
            if(c1<=c2)
            {
                sum=sum+2*(b-c1+1);
            }
            else
            {
                sum=sum+2*(b-c2+1);
            }
            cout<<sum<<endl;
        }
        c1=0;
        c2=0;
        sum=0;
    }
}
