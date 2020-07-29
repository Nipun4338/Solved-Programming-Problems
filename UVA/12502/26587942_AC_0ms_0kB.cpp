#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float e=0,f=0,h=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d;
        e=(b+c)/3.0;
        if(b>e){
        f=d/e*1.0;
        h=(abs(b-e)*f);
        printf("%.0f\n",h);
        e=0;
        f=0;
        h=0;
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;

}