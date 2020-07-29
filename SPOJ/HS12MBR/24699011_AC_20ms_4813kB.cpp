#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b,c,d,e,f;
    string x;
    cin>>a;
    while(a--)
    {
        int y1=INT_MAX,y2=INT_MAX,y3=INT_MIN,y4=INT_MIN;
        cin>>b;
        for(int i=0; i<b; i++)
        {
            cin>>x;
            if(x[0]=='p')
            {
                cin>>c>>d;
                if(c<=y1)
                {
                    y1=c;
                }
                if(d<=y2)
                {
                    y2=d;
                }
                if(c>=y3)
                {
                    y3=c;
                }
                if(d>=y4)
                {
                    y4=d;
                }
            }
            else if(x[0]=='c')
            {
                cin>>c>>d>>e;
                int temp1=c-e;
                int temp2=d+e;
                int temp3=c+e;
                int temp4=d-e;
                if(temp1<=y1)
                {
                    y1=temp1;
                }
                if(temp4<=y2)
                {
                    y2=temp4;
                }
                if(temp3>=y3)
                {
                    y3=temp3;
                }
                if(temp2>=y4)
                {
                    y4=temp2;
                }
            }
            else if(x[0]=='l')
            {
                cin>>c>>d>>e>>f;
                if(c<=y1)
                {
                    y1=c;
                }
                if(d<=y2)
                {
                    y2=d;
                }
                if(e<=y1)
                {
                    y1=e;
                }
                if(f<=y2)
                {
                    y2=f;
                }
                if(e>=y3)
                {
                    y3=e;
                }
                if(f>=y4)
                {
                    y4=f;
                }
                if(c>=y3)
                {
                    y3=c;
                }
                if(d>=y4)
                {
                    y4=d;
                }
            }
        }
        cout<<y1<<" "<<y2<<" "<<y3<<" "<<y4<<endl;
    }
}
