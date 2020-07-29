#include<bits/stdc++.h>
using namespace std;
char a[200005];
int main()
{
    int b=0;
    gets(a);
    b=strlen(a);
    for(int i=0; i<b-1; i++)
    {
        if(a[i]==a[i+1])
        {
            a[i+1]=a[i+1]+1;
        }
        else
        {
            a[i]=a[i];
        }
    }
    for(int i=0; i<b; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
