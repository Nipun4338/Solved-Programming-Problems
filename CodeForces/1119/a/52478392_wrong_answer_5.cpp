#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[300000],c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<a; i++)
    {
        if(b[i]!=b[a-1])
        {
            c=(a-1-i);
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
