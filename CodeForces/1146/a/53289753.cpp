#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0;
    char b[55];
    gets(b);
    a=strlen(b);
    for(int i=0; i<a; i++)
    {
        if(b[i]=='a')
        {
            c++;
        }
    }
    if((double)(a/2)<c)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<(c-1)+c<<endl;
    }
    return 0;
}
