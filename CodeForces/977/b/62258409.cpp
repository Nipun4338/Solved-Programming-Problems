#include<bits/stdc++.h>
using namespace std;

int main()
{
    string b,c,d;
    int a,sum=0,sum1=0;
    cin>>a;
    getchar();
    getline(cin,b);
    for(int i=0; i<a-1; i++)
    {
        c[0]=b[i];
        c[1]=b[i+1];
        for(int j=0; j<a-1; j++)
        {
            if(c[0]==b[j] && c[1]==b[j+1])
            {
                sum1++;
            }
        }
        //cout<<sum1<<endl;
        if(sum<sum1)
        {
            d[0]=c[0];
            d[1]=c[1];
            sum=sum1;
        }
        sum1=0;
    }
    for(int i=0; i<2; i++)
    {
        cout<<d[i];
    }
    cout<<endl;
}
