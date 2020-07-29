#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[3001],flag;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    if(b[0]>1)
    {
        cout<<"1"<<endl;
    }
    else if(b[0]==1)
    {
        for(int j=0; j<a-1; j++)
        {
            if(b[j+1]-b[j]!=1)
            {
                cout<<b[j]+1<<endl;
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            cout<<b[a-1]+1<<endl;
        }
    }
    return 0;
}
