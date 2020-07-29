#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[100],c[100],d[100],l=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
        c[i]=b[i];
    }
    sort(c,c+a);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(c[i]==b[j])
            {
                d[l]=j;
                l++;
            }
        }
    }
    for(int k=0; k<a; k++)
    {
        cout<<d[k]+1;
        if(k!=a-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
