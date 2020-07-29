#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[100];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    for(int i=0; i<a; i++)
    {
        if(b[i]>b[0])
        {
            cout<<b[i]<<endl;
            break;
        }
    }
    return 0;
}
