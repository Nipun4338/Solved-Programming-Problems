#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105],b[105],c[105];
    int d=0,l=0;
    gets(a);
    gets(b);
    d=strlen(a);
    for(int i=d-1; i>=0; i--)
    {
        c[l]=a[i];
        l++;
    }
    c[l]='\0';
    if(strcmp(c,b)==0)
    {
        cout<<"YES"<<endl;
    }
    else if(strcmp(c,b)!=0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
