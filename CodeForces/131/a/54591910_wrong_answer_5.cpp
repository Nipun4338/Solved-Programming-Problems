#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105],d='A',e[26];
    int b,sum=0;
    for(int i=0; i<26; i++)
    {
        e[i]=d;
        d++;
    }
    gets(a);
    b=strlen(a);
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(a[i]==e[j])
            {
                sum++;
            }
        }
    }
    if(sum==b)
    {
        a[0]=toupper(a[0]);
        cout<<(a[0]);
        for(int i=1; i<b; i++)
        {
            a[i]=tolower(a[i]);
            cout<<(a[i]);
        }
    }
    else if(sum==b-1 && a[0]>='a' && a[0]<='z')
    {
        a[0]=toupper(a[0]);
        cout<<(a[0]);
        for(int i=1; i<b; i++)
        {
            a[i]=tolower(a[i]);
            cout<<(a[i]);
        }
    }
    else
    {
        puts(a);
    }
    cout<<endl;
    return 0;
}
