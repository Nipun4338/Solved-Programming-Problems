#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        d=b-c;
        if(d==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
