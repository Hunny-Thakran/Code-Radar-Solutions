// Your code here...
#include<stdio.h>
int main()
{
    int size, i, j;
    scanf("%d", &size);
    for(i=1;i<=size;i++)
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
    
    return 0;
}