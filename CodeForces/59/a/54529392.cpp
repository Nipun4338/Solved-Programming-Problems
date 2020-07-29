#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,sum1=0,sum2=0;
    char b[105];
    gets(b);
    a=strlen(b);
    for(int i=0; i<a; i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        {
            sum1++;
        }
        else if(b[i]>='a' && b[i]<='z')
        {
            sum2++;
        }
    }
    if(sum1>sum2)
    {
        for(int i=0; i<a; i++)
        {
            b[i]=toupper(b[i]);
            printf("%c",b[i]);
        }
        cout<<endl;
    }
    else if(sum1<=sum2)
    {
        for(int i=0; i<a; i++)
        {
            b[i]=tolower(b[i]);
            printf("%c",b[i]);
        }
        cout<<endl;
    }
    return 0;
}
