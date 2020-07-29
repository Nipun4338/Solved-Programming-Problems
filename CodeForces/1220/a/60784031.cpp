#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,sum1=0,sum2=0;
    string b;
    cin>>a;
    getchar();
    getline(cin,b);
    for(int i=0; i<a; i++)
    {
        if(b[i]=='z')
        {
            sum1++;
        }
        if(b[i]=='n')
        {
            sum2++;
        }
    }
    for(int i=0; i<sum2; i++)
    {
        cout<<"1";
        cout<<" ";
    }
    for(int i=0; i<sum1; i++)
    {
        cout<<"0";
        cout<<" ";
    }
    cout<<endl;
}
