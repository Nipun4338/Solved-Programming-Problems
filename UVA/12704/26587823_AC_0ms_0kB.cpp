#include<bits/stdc++.h>
using namespace std;

int main()
{
    float e=0,f=0,g=0;
    int a,b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        e=sqrt(pow(b,2)+pow(c,2));
        f=d-e;
        g=d+e;
        printf("%0.2f %.2f\n",f,g);
        e=0;
        f=0;
        g=0;
    }
    return 0;

}