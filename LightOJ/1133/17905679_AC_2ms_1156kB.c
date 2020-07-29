#include<stdio.h>

int main()
{
    int a,b,c,d[100],f,g,h,i,j,k,a1,a2,x=0,l,arr[100];
    char e;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d",&b,&c);

            for(j=0; j<b; j++)
            {
            scanf("%d",&d[j]);
            }
            for(k=0,x=0; k<c; k++)
            {
                getchar();
                scanf("%c",&e);
                if(e=='S')
                {
                    scanf("%d",&f);
                for(j=0; j<b; j++)
                    {
                    d[j]=d[j]+f;
                    }
                }
                if(e=='M')
                {
                    scanf("%d",&g);
                for(j=0; j<b; j++)
                    {
                    d[j]=d[j]*g;
                    }
                }
                if(e=='D')
                {
                    scanf("%d",&h);
                for(j=0; j<b; j++)
                    {
                    d[j]=d[j]/h;
                    }
                }
                if(e=='R')
                {

                for(j=0; j<b; j++)
                    {
                        arr[j]=d[b-j-1];
                    }
                    for(j=0; j<b; j++)
                    {
                        d[j]=arr[j];
                    }
                }
                if(e=='P')
                    {
                scanf("%d%d",&a1,&a2);
                {
                    x=d[a1];
                    d[a1]=d[a2];
                    d[a2]=x;
                    }
                    }
            }
        printf("Case %d:\n",i+1);
        for(j=0; j<b-1; j++)
        {
            printf("%d ",d[j]);
        }
        printf("%d\n",d[b-1]);
    }
    return 0;
}
