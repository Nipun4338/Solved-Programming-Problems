/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int a,b,c=0,sum=0,d=0;
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
    cout<<sum<<endl;
    return 0;
}
