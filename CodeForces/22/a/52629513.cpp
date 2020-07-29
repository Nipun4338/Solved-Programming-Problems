#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[100],flag=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    if(a>1)
    {
        for(int i=0; i<a; i++)
        {
            if(b[i]>b[0])
            {
                cout<<b[i]<<endl;
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag==1 || a<2)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
