/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b[1005],c[1005],sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        c[i]=b[i];
    }
    for(int i=1; i<a; i++)
    {
        sort(c,c+i);
        if(b[i]<c[0] || b[i]>c[i-1])
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
