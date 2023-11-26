#include<stdio.h>
int main()
{
    int m[3][4],i,j;
    int max = m[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if (m[i][j] > max)
            {
                 max = m[i][j] ;
            }
        }

    }

        printf("Maximum = %d\n",max);
}
