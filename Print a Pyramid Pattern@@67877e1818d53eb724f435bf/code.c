// Your code here...
#include<stdio.h>
int main() {
    int i,space,rows,j=o;
    scanf("%d",&rows);
    for(i=1;i<=rows,i++)
    {
        for(space=1;space<=rows;space++)
        {
            printf(" ");
        }
        j=2*i-1;
        while(j>0)
        {
            printf("*");
            j--;
        }
        printf("\n");
    }
   return 0;
}