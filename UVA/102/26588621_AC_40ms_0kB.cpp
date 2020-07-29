#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a0,a1,a2,a3,a4,a5,a6,a7,a8,b[6],d[6],bgc=0,bcg=0,gbc=0,gcb=0,cbg=0,cgb=0;
    string c[6];
    while(cin>>a0>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8){
    bgc=a3+a6+a1+a7+a2+a5;
    bcg=a3+a6+a2+a8+a1+a4;
    gbc=a4+a7+a0+a6+a2+a5;
    gcb=a4+a7+a2+a8+a0+a3;
    cbg=a5+a8+a0+a6+a1+a4;
    cgb=a5+a8+a1+a7+a0+a3;
    b[1]=bgc;
    c[1]="BGC";
    b[0]=bcg;
    c[0]="BCG";
    b[4]=gbc;
    c[4]="GBC";
    b[5]=gcb;
    c[5]="GCB";
    b[2]=cbg;
    c[2]="CBG";
    b[3]=cgb;
    c[3]="CGB";
    for(int i=0; i<6; i++)
    {
        d[i]=b[i];
    }
    sort(b,b+6);
    for(int i=0; i<6; i++)
    {
        if(b[0]==d[i])
        {
            cout<<c[i]<<" "<<b[0]<<endl;
            break;
        }
    }
    }
    return 0;
}
