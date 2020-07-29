/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c;
    set<int> s;
    s.clear();
    while(cin>>a>>b)
    {
        if(a+b==0)
        {
            break;
        }
        else{
        for(int i=0; i<a; i++)
        {
            cin>>c;
            s.insert(c);
        }
        for(int j=0; j<b; j++)
        {
            cin>>c;
            s.insert(c);
        }
        cout<<(a+b)-s.size()<<endl;
        s.clear();
        }
    }
    return 0;
}
