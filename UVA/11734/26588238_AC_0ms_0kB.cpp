#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,d=0,e=0,m=-1,n=-1;
    char a[100],c[100],x[100],y[100],o[100],p[100];
    cin>>b;
    getchar();
    for(int i=0; i<b; i++)
    {
        gets(a);
        gets(c);
        if(strcmp(a,c)==0)
        {
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
        else if(strcmp(a,c)!=0)
        {
            d=strlen(a);
            e=strlen(c);
            for(int j=0; j<d; j++)
            {
                if(a[j]!=' ')
                {
                    n++;
                    x[n]=a[j];
                }
            }
            x[n+1]='\0';
            strcpy(o,x);
            for(int k=0; k<e; k++)
            {
                if(c[k]!=' ')
                {
                    m++;
                    y[m]=c[k];
                }
            }
            y[m+1]='\0';
            strcpy(p,y);
            if(strcmp(o,p)==0)
            {
                cout<<"Case "<<i+1<<": Output Format Error"<<endl;
            }
            else if(strcmp(o,p)!=0)
            {
                cout<<"Case "<<i+1<<": Wrong Answer"<<endl;
            }
        d=0;
        e=0;
        n=-1;
        m=-1;
        }
    }
    return 0;
}