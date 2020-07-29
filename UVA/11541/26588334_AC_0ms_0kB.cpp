#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,l=0,num=0,num1=0;
    char b[51],d[51];
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(b);
        c=strlen(b);
        cout<<"Case "<<i+1<<": ";
        for(int j=0; j<c; j++)
        {
            if(b[j]>='0' && b[j]<='9')
            {
                num=num*10+(b[j]-'0');
            }
            if(b[j]>='A' && b[j]<='Z')
            {
                d[l]=b[j];
                l++;
                num=0;
            }
            if(num<10)
            {
                for(int k=1; k<=num; k++)
                {
                    cout<<d[l-1];
                }
            }
            else
            {
                num1=num/10;
                for(int k=1; k<=(num-num1); k++)
                {
                    cout<<d[l-1];
                }
                num1=0;
            }
        }
        cout<<endl;
        l=0;
    }
    return 0;
}