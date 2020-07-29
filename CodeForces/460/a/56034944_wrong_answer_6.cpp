/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c=0,sum=0;
    cin>>a>>b;
    c=a/b;
    sum=sum+a+c;
    while(c>=b)
    {
        c=c/b;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}

