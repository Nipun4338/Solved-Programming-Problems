#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c=0;
    while(cin>>a>>b)
    {
        c=pow(b,1.0/a);
        printf("%.0f\n",c);
        c=0;
    }
    return 0;

}