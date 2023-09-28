#include <stdio.h>
int main()
{
    printf("The first way to declaration of 2 D Array :\n");
    int x[4][4]= { {2,3,4,5},
        {3,1,2,5},
        {6,5,7,3},
        {6,4,1,9}
    };
    int row,col;
    for (row = 0; row < 4 ; row++)
    {
        for(col = 0 ; col < 4 ; col++)
        {
            printf("%d ",x[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The Second way to Declaration of 2D Array :\n");
    int y[3][4];
    int I,J; // I = row ; J = col;
    for(I = 0; I < 3; I++)
    {
        for(J = 0; J < 4; J++)
        {
            printf("%d ",y[I][J] = I);// I+J = row + col ; J = col ; I = row;
        }
        printf("\n");
    }
    printf("The Third way to Declaration 2D Array : \n");


    int i, j, matrix[3][4];
    for (i=0; i<3; i++)
        for (j=0; j<4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }


}
