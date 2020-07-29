#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,sum=0,sum1=0,sum3=0,c,d,e=0;
    string b;
    cin>>a;
    getchar();
    getline(cin,b);
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='1')
        {
            sum3++;
        }
    }
    for(int i=0; i<a; i++)
    {
        cin>>c>>d;
        e=c+d;
        if(e>=a && e<2*a)
        {
            sum++;
        }
        else
        {
            sum1++;
        }
    }
    if(sum3==a)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<max(sum1,sum)<<endl;
    }
}
