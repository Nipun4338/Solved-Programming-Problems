#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,flag;
    char b[105];
    gets(b);
    a=strlen(b);
    for(int i=0; i<a; i++)
    {
        if(b[i]=='H' || b[i]=='Q' || b[i]=='9' || b[i]=='+')
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
