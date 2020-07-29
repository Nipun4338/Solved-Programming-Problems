#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b[1100];
    int a,c,d=0;
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        if(d==1){
        cout<<endl;
        }
        d=1;
        while(gets(b)){
        if(strlen(b)==0) break ;
    for(int j=0; j<strlen(b); j++)
    {
        if(b[j]=='1')
        {
            b[j]='I';
        }
        if(b[j]=='2')
        {
            b[j]='Z';
        }
        if(b[j]=='3')
        {
            b[j]='E';
        }
        if(b[j]=='4')
        {
            b[j]='A';
        }
        if(b[j]=='5')
        {
            b[j]='S';
        }
        if(b[j]=='6')
        {
            b[j]='G';
        }
        if(b[j]=='7')
        {
            b[j]='T';
        }
        if(b[j]=='8')
        {
            b[j]='B';
        }
        if(b[j]=='9')
        {
            b[j]='P';
        }
        if(b[j]=='0')
        {
            b[j]='O';
        }
    }
    puts(b);
    }
    }
    return 0;
}
