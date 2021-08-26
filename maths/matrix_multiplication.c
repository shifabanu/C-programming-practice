/******************************************************************************


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int A[4][2], B[2][3], R[4][3];
    
    printf("Enter the first matrix:\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enter the number for %d%d: ", i, j);
            scanf("%d", &A[i][j]);
            //printf("%d\t", A[i][j]);
            //printf("\t");
        }
        
        //printf("\n");
    }
    
    printf("Enter the second matrix:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter the number for %d%d: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("The Multiplication becomes: ");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<2; k++)
            {
                sum = sum + A[i][k]*B[k][j];
            }
            R[i][j] = sum;
            sum=0;
        }
        
    }
    
    printf("The resultant matrix is:\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
