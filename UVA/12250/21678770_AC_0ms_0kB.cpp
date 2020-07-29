#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[14];
    int b=0;
    while(cin>>a)
    {
        if(strcmp(a,"#")==0)
        {
            break;
        }
        else
        {
            b++;
            if(strcmp(a,"HELLO")==0)
            {
                cout<<"Case "<<b<<": ENGLISH"<<endl;
            }
            else if(strcmp(a,"HOLA")==0)
            {
                cout<<"Case "<<b<<": SPANISH"<<endl;
            }
            else if(strcmp(a,"HALLO")==0)
            {
                cout<<"Case "<<b<<": GERMAN"<<endl;
            }
            else if(strcmp(a,"BONJOUR")==0)
            {
                cout<<"Case "<<b<<": FRENCH"<<endl;
            }
            else if(strcmp(a,"CIAO")==0)
            {
                cout<<"Case "<<b<<": ITALIAN"<<endl;
            }
            else if(strcmp(a,"ZDRAVSTVUJTE")==0)
            {
                cout<<"Case "<<b<<": RUSSIAN"<<endl;
            }
            else
            {
                cout<<"Case "<<b<<": UNKNOWN"<<endl;
            }
        }
    }
    return 0;
}