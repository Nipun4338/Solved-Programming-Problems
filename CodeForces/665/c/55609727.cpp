#include<bits/stdc++.h>
using namespace std;
char a[2000005];
int main()
{
    int b=0;
    gets(a);
    b=strlen(a);
    for(int i=0; i<b; i++)
    {
        if(a[i]==a[i-1])
        {
            for(a[i]='a'; a[i]==a[i-1] || a[i]==a[i+1]; a[i]++)
            {

            }
        }
    }
    for(int i=0; i<b; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}