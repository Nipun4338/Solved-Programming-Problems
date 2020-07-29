#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,d=0;
    char b[101];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        if(b[i]=='8')
        {
            c++;
        }
    }
    d=a/11;
    if(d>=c)
    {
        cout<<c<<endl;
    }
    else if(d<c && c!=0)
    {
        cout<<d<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
