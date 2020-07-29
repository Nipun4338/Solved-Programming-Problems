/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c=0,sum=0,d=0;
    cin>>a>>b;
    //c=a/b;
    c=a;
    sum=sum+a;
    while(c>=b)
    {
        d=c%b;
        c=c/b;
        sum+=c;
        c=c+d;
    }
    cout<<sum+d<<endl;
    return 0;
}

