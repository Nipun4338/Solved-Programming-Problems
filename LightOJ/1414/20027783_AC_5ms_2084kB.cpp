#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,e,b1,e1,sum1=0,flag,x=0,y=0,z=0;
    char c,d[12],d1[12],c1;
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        cin>>d>>b>>c>>e;
        cin>>d1>>b1>>c1>>e1;
        if(strcmp(d,"January")==0)
        {
            e=e;
        }
        else if(strcmp(d,"February")==0)
        {
            e=e;
        }
        else
        {
            e=e+1;
        }


        if(strcmp(d1,"January")==0)
        {
            e1=e1-1;
        }
        else if(strcmp(d1,"February")==0 && b1!=29)
        {
            e1=e1-1;
        }
        else if(strcmp(d1,"February")==0 && b1==29)
        {
            e1=e1;
        }
        else
        {
            e1=e1;
        }
        x=(e1/4)-((e-1)/4);
        y=(e1/100)-((e-1)/100);
        z=(e1/400)-((e-1)/400);
        sum1=x-y+z;
        cout<<"Case "<<i+1<<": "<<sum1<<endl;
        sum1=0;
        x=0;
        y=0;
        z=0;
    }
	return 0;
}
