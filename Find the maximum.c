#include<stdio.h>
int main()
{
    printf("Enter value : \n");
    int n[3][4];
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    int I,J;
    for (I = 0; I < 3; I++)
    {
        for(J = 0; J < 4; J++)
        {
            printf("%d ",n[I][J]);
        }
        printf("\n");
    }
    printf("Maximum value is : ");
    int max = n[0][0];
    int a,b;
    for(a = 0; a < 3; a++)
    {
        for(b = 0; b < 4; b++)
        {
            if(max < n[a][b])
            {
                max = n[a][b];
            }
        }
    }
    printf("%d\n",max);

    return 0;
}
