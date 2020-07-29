#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    char c[105],d[105];
    gets(c);
    gets(d);
    a=strlen(c);
    for(int i=0; i<a; i++)
    {
        c[i]=tolower(c[i]);
        d[i]=tolower(d[i]);
    }
    cout<<strcmp(c,d)<<endl;
    return 0;
}
