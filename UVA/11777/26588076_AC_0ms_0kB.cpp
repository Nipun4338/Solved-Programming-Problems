#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f[3],g=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c>>d>>e>>f[0]>>f[1]>>f[2];
        sort(f,f+3);
        g=b+c+d+e+((f[1]+f[2])/2);
        if(g>=90)
        {
            cout<<"Case "<<i+1<<": A"<<endl;
        }
        else if(g>=80 && g<90)
        {
            cout<<"Case "<<i+1<<": B"<<endl;
        }
        else if(g>=70 && g<80)
        {
            cout<<"Case "<<i+1<<": C"<<endl;
        }
        else if(g>=60 && g<70)
        {
            cout<<"Case "<<i+1<<": D"<<endl;
        }
        else if(g<60)
        {
            cout<<"Case "<<i+1<<": F"<<endl;
        }
        g=0;
    }
    return 0;
}
