#include <stdio.h>
int main()
{
    printf("Enter The First Array value :\n");

    int a,b;
    int n[3][4];
    for(a = 0; a < 3; a++)
    {
        for(b = 0; b < 4; b++)
        {
            scanf("%d",&n[a][b]);
        }
    }
    printf("The First Array Output is :\n");

    int a1,b1;
    for(a1 = 0; a1 < 3; a1++)
    {
        for(b1 = 0; b1 < 4; b1++)
        {
            printf("%d ",n[a1][b1]);
        }
        printf("\n");
    }
    printf("Enter The First Array value :\n");

    int a2,b2;
    int n1[3][4];
    for(a2 = 0; a2 < 3; a2++)
    {
        for(b2 = 0; b2 < 4; b2++)
        {
            scanf("%d",&n1[a2][b2]);
        }
    }
    printf("The Second Array Output is :\n");

    int a3,b3;
    for(a3 = 0; a3 < 3; a3++)
    {
        for(b3 = 0; b3 < 4; b3++)
        {
            printf("%d ",n[a3][b3]);
        }
        printf("\n");
    }
    // Now Add 2 array;
    int sum[3][4];
    int a4,b4;
    for(a4 = 0; a4 < 3; a4++)
    {
        for(b4 = 0; b4 < 4; b4++)
        {
            sum[a4][b4] = n[a4][b4] + n1[a4][b4];
        }
    }
    int a5,b5;
    printf("The new adding Array :\n");
    for(a5 = 0; a5 < 3; a5++)
    {
        for(b5 = 0; b5 < 4; b5++)
        {
            printf("%d ",sum[a5][b5]);
        }
        printf("\n");
    }
    return 0;
}
