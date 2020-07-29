#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,flag;
    char b[1001][6];
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(b[i]);
    }
    for(int i=0; i<a; i++)
    {
        if(b[i][0]=='O' && b[i][1]=='O')
        {
            flag=1;
            b[i][0]='+';
            b[i][1]='+';
            break;
        }
        else if(b[i][3]=='O' && b[i][4]=='O')
        {
            flag=1;
            b[i][3]='+';
            b[i][4]='+';
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else if(flag==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<a; i++)
        {
            puts(b[i]);
        }
    }
    return 0;
}
