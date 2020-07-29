/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1005];
    set<char> s;
    gets(a);
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            s.insert(a[i]);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}

