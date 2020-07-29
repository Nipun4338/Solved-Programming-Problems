#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int top,bottom,east,west,north,south,b;
    string a;
    while(cin>>b)
    {
        if(b==0)
        {
            break;
        }
        top=1;
        bottom=6;
        east=4;
        west=3;
        north=2;
        south=5;
        getchar();
        while(b--)
        {
            cin>>a;
            if(a=="north")
            {
                int temp1,temp2,temp3,temp4;
                temp1=top;
                top=south;
                temp2=bottom;
                bottom=north;
                north=temp1;
                south=temp2;
            }
            else if(a=="east")
            {
                int temp1,temp2,temp3,temp4;
                temp1=top;
                top=west;
                temp2=bottom;
                bottom=east;
                east=temp1;
                west=temp2;
            }
            else if(a=="west")
            {
                int temp1,temp2,temp3,temp4;
                temp1=top;
                top=east;
                temp2=bottom;
                bottom=west;
                east=temp2;
                west=temp1;
            }
            if(a=="south")
            {
                int temp1,temp2,temp3,temp4;
                temp1=top;
                top=north;
                temp2=bottom;
                bottom=south;
                north=temp2;
                south=temp1;
            }
        }
        cout<<top<<endl;
    }
}
