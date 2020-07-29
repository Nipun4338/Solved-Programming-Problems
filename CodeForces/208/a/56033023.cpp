/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    char a[205];
    cin>>a;
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            a[i]=' ';
            a[i+1]=' ';
            a[i+2]=' ';
            i+=2;
        }
    }
    cout<<a<<endl;
    return 0;
}

