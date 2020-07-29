#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[200001],c=0,l=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    for(int i=0; i<a; i++)
    {
        if(b[i]==b[i+1])
        {
        }
        else if(b[i]!=b[i+1])
        {
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}
