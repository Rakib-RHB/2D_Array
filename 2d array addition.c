#include<stdio.h>
int main()
{
    int m[3][4],i,j;
    int max = m[0][0];
    printf("1st matrix Value : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    int n[3][4];

    int sum[3][4];
    printf("2st matrix Value : \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            sum[i][j] = m[i][j] + n[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}
