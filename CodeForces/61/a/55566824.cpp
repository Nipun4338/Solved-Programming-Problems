#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105],b[105],e[105];
    int c=0;
    gets(a);
    gets(b);
    c=strlen(a);
    for(int i=0; i<c; i++)
    {
        if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
        {
            e[i]='1';
        }
        else
        {
            e[i]='0';
        }
    }
    for(int i=0; i<c; i++)
    {
        cout<<e[i];
    }
    cout<<endl;
    return 0;
}
