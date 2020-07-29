#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double c=0,d=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=M_PI*pow((b/5.0),2);
        d=(b*(0.6*b))-c;
        printf("%.2f %.2f\n",c,d);
        c=0;
        d=0;
    }
    return 0;
}
