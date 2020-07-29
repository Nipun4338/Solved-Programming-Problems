#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[2],b[5][2];
    int flag=0;
    cin>>a;
    for(int i=0; i<5; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<5; i++)
    {
        if(b[i][0]==a[0] || b[i][1]==a[1])
        {
            cout<<"YES"<<endl;
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
