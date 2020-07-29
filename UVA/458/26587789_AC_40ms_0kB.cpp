#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10000];
    int b=0;
    while(cin>>a)
    {
        b=strlen(a);
        for(int i=0; i<b; i++)
        {
            a[i]=a[i]-7;
        }
        cout<<a<<endl;
        b=0;
    }
    return 0;

}