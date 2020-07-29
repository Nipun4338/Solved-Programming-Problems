/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b[100005]={};
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    swap(b[a-1],b[a-2]);
    if(b[a-2]<b[a-1]+b[a-3])
    {
        cout<<"YES"<<endl;
        for(int i=0; i<a; i++)
        {
            cout<<b[i];
            if(i!=a-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
