/*
ID: Nipun Paul
LANG: C++
PROB: ride
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    queue<int> q;
    while(cin>>a){
    if(a==0)
    {
        break;
    }
    for(int i=0; i<a; i++)
    {
        q.push(i+1);
    }
    cout<<"Discarded cards:";
    while(q.size()>1)
    {
        cout<<" "<<q.front();
        q.pop();
        b=q.front();
        q.pop();
        if(!q.empty())
        {
            cout<<",";
        }
        q.push(b);
    }
    cout<<endl<<"Remaining card:"<<" "<<q.front()<<endl;
    q.pop();
    }
    return 0;
}
