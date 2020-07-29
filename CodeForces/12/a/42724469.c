#include<stdio.h>
int main()
{
    char c[4][4];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<=3; j++)
        {
            scanf("%c",&c[i][j]);
        }
    }
    if(c[0][0]==c[2][2] && c[0][1]==c[2][1] && c[0][2]==c[2][0] && c[1][0]==c[1][2] && c[1][1]==c[1][1] && c[1][2]==c[1][0])
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
