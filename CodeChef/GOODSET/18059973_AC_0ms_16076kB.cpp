#include<stdio.h>
    int main()
    {
    	int t,i,j=400,n;
    	scanf("%d",&t);
    	while(t--)
    	{
    	
    		scanf("%d",&i);
    		for (n=0;n<i;n++)
    		{
    			printf("%d ",j);
    			j++;	
    		}
    		printf("\n");
    		j=400;
        }
        return 0;
    }  