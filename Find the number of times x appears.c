#include <stdio.h>
int main()
{
    // Using While loop full program  &  the program runs 3 times :
    int Z = 0;
    while(Z < 3)
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
        printf("The out put is :\n");
        int I,J;
        for (I = 0; I < 3; I++)
        {
            for(J = 0; J < 4; J++)
            {
                printf("%d ",n[I][J]);
            }
            printf("\n");
        }
        int count, a, b, x;
        printf("Enter the appears value : ");
        scanf("%d",&x);
        count = 0;
        for (a = 0; a < 3; a++)
        {
            for(b = 0; b < 4; b++)
            {
                if(n[a][b] == x)
                {
                    count++;
                }
            }
        }
        printf("The appears value 'X' repets : %d times\n",count);
        Z++;
    }
    return 0;

}
