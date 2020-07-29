/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    set<string> s;
    set<string>::iterator it;
    while(cin>>a)
    {
        b="";
        for(int i=0; i<a.size(); i++)
        {
            if(isalpha(a[i]))
            {
                b.push_back(tolower(a[i]));
            }
            else if(!b.empty())
            {
                s.insert(b);
                b.clear();
            }
        }
        if(!b.empty())
        {
            s.insert(b);
        }
    }
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
