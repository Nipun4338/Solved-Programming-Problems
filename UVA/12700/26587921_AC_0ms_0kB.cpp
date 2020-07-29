#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,c,d,Bangladesh=0,World=0,Tie=0,Abandon=0;
    char b[11];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        for(int j=0; j<c; j++)
        {
            cin>>b[j];
            if(b[j]=='B')
            {
                Bangladesh++;
            }
            else if(b[j]=='W')
            {
                World++;
            }
            else if(b[j]=='T')
            {
                Tie++;
            }
            else if(b[j]=='A')
            {
                Abandon++;
            }
        }
        if(Bangladesh>0 && World==0 && Tie==0)
        {
            cout<<"Case "<<i+1<<": BANGLAWASH"<<endl;
        }
        else if(World>0 && Bangladesh==0 && Tie==0)
        {
            cout<<"Case "<<i+1<<": WHITEWASH"<<endl;
        }
        else if(Bangladesh-World>0)
        {
            cout<<"Case "<<i+1<<": BANGLADESH "<<Bangladesh<<" - "<<World<<endl;
        }
        else if(World-Bangladesh>0)
        {
            cout<<"Case "<<i+1<<": WWW "<<World<<" - "<<Bangladesh<<endl;
        }
        else if(World==Bangladesh && (World>0 || Tie>0))
        {
            cout<<"Case "<<i+1<<": DRAW "<<Bangladesh<<" "<<Tie<<endl;
        }
        else if(World==0 && Bangladesh==0 && Tie==0 && Abandon>0)
        {
            cout<<"Case "<<i+1<<": ABANDONED"<<endl;
        }
        Bangladesh=0;
        World=0;
        Tie=0;
        Abandon=0;
    }
    return 0;

}