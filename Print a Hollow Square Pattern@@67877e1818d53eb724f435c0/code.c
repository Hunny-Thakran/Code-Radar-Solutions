// Your code here...
#include<stdio.h>
int main()
{
    int size, i, j;
    scanf("%d", &size);
    
    // Print the square
    for (i=1; i <= size; i++) {
        for(j=1;j<=size;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(i==1 || j==1 || i==size || j==size)
            {
                printf("*");

            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");

        }
    }
    
    return 0;
}