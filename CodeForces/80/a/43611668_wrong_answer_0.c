#include<stdio.h>
int main()
{
    int a,i,b,j,prime;
    scanf("%d%d",&a,&b);
    for(i=a+1; i<=b; i++)
    {
        int m=2,n=3,o=5;
        if(i!=m && i!=n && i!=0){
            if(i%2!=0 && i%3!=0 && i%5!=0)
            {
                prime=0;
                break;
            }
            else
            {
                prime=1;
            }
        }
        }
    if(prime==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
        return 0;
}
