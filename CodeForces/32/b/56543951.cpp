/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[205],b[205],l=0;
    memset(b,0,205);
    memset(a,0,205);
    cin>>a;
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='.')
        {
            b[l]='0';
            l++;
            a[i]='0';
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            b[l]='1';
            l++;
            a[i]='0';
            a[i+1]='0';
        }
        else if(a[i]=='-' && a[i+1]=='-')
        {
            b[l]='2';
            l++;
            a[i]='0';
            a[i+1]='0';
        }
    }
    cout<<b<<endl;
    return 0;
}
