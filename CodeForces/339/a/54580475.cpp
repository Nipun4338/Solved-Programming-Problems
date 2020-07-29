#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[105],c,l=0;
    char d[105];
    gets(d);
    a=strlen(d);
    for(int i=0; i<a; i+=2)
    {

        b[l]=d[i]-'0';
        l++;
    }
    sort(b,b+l);
    for(int i=0; i<l; i++)
    {
        cout<<b[i];
        if(i!=l-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
