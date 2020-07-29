#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[105];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    for(int i=0; i<a; i++)
    {
        cout<<b[i];
        if(i!=a-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
