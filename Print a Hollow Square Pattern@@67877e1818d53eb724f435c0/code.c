// Your code here...
#include<stdio.h>
int main()
{
    int size, i, j;
    scanf("%d", &size);
    
    // Print the square
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}