#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        scanf("%d:%d",&b,&c);
        if(b<11 && c==0)
        {
            e=12-b;
            d=0;
        }
        else if(b<11 && c>0 && c<60)
        {
            e=12-b-1;
            d=60-c;
        }
        else if(b==11 && c>0)
        {
            e=12;
            d=60-c;
        }
        else if(b==12 && c<60 && c>0)
        {
            e=11;
            d=60-c;
        }
        else if(b==12 && c==00)
        {
            e=12;
            d=0;
        }
        else if(b==11 && c==00)
        {
            e=1;
            d=0;
        }
        else if(b==1 && c==00)
        {
            e=11;
            d=0;
        }
        //cout<<e<<":"<<d<<endl;
        printf("%02d:%02d\n",e,d);
        d=0;
        e=0;
    }
    return 0;
}