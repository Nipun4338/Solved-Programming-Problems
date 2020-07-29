#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    char b[20];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(strcmp(b,"Tetrahedron")==0)
        {
            sum=sum+4;
        }
        else if(strcmp(b,"Cube")==0)
        {
            sum=sum+6;
        }
        else if(strcmp(b,"Octahedron")==0)
        {
            sum=sum+8;
        }
        else if(strcmp(b,"Dodecahedron")==0)
        {
            sum=sum+12;
        }
        else if(strcmp(b,"Icosahedron")==0)
        {
            sum=sum+20;
        }
    }
    cout<<sum<<endl;
    return 0;
}
