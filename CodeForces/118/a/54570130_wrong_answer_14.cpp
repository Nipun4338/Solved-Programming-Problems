#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,l=0;
    char b[105],c[200];
    gets(b);
    a=strlen(b);
    for(int i=0; i<a; i++)
    {
        if(b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U' || b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
        {
            b[i]='.';
        }
        else
        {
            c[l]='.';
            l++;
            c[l]=tolower(b[i]);
            l++;
        }
    }
    for(int i=0; i<l; i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
