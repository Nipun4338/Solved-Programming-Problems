#include<bits/stdc++.h>
using namespace std;

int main()
{
    string b,c,d;
    int a,sum=0,sum1=0;
    cin>>a;
    getchar();
    getline(cin,b);
    d[0]=b[0];
    d[1]=b[1];
    for(int i=0; i<a-1; i++)
    {
        c[0]=b[i];
        c[1]=b[i+1];
        for(int j=0; j<a-1; j++)
        {
            if(c[0]==b[j] && c[1]==b[j+1])
            {
                sum++;
            }
        }
        if(sum>sum1)
        {
            c[0]=d[0];
            c[1]=d[1];
        }
    }
    for(int i=0; i<2; i++)
    {
        cout<<c[i];
    }
    cout<<endl;
}
