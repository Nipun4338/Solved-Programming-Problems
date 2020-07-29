#include<bits/stdc++.h>
using namespace std;

int main()
{
    char b[20];
    int a,c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        c=strlen(b);
        if(c==5)
        {
            cout<<"3"<<endl;
        }
        else if((b[0]=='t' && b[1]=='w') || (b[0]=='t' && b[2]=='o') || (b[1]=='w' && b[2]=='o'))
        {
            cout<<"2"<<endl;
        }
        else if((b[0]=='o' && b[1]=='n') || (b[0]=='o' && b[2]=='e') || (b[1]=='n' && b[2]=='e'))
        {
            cout<<"1"<<endl;
        }
        c=0;
    }
    return 0;
}