#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[300000],c=0,d=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int j=0; j<a; j++)
    {
        if(b[j]!=b[a-1])
        {
            c=(a-1-j);
            break;
        }
    }
    for(int i=a-1; i>=0; i--)
    {
        if(b[i]!=b[0])
        {
            d=i;
            break;
        }
    }
    if(c>=d){
    cout<<c<<endl;
    }
    else if(c<d)
    {
        cout<<d<<endl;
    }
    return 0;
}
