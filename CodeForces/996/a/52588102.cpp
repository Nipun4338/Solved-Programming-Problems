#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,e,f,g,h,i,j;
    cin>>a;
    b=a/100;
    c=a%100;
    d=c/20;
    e=c%20;
    f=e/10;
    g=e%10;
    h=g/5;
    i=g%5;
    j=i/1;
    cout<<b+d+f+h+j<<endl;
    return 0;
}
