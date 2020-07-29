#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char b[100],d[100];
    cin>>a;
    for(int j=0; j<a; j++)
    {
        cin>>b[j];
    }
    for(int i=0; i<a; i++)
    {
        d[i]=tolower(b[i]);
    }
    if(d[0]=='s' && d[a-1]=='f')
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
