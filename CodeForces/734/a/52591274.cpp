#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,d=0;
    char b;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b=='A')
        {
            c++;
        }
        else if(b=='D')
        {
            d++;
        }
    }
    if(c>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(c<d)
    {
        cout<<"Danik"<<endl;
    }
    else if(c==d)
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
