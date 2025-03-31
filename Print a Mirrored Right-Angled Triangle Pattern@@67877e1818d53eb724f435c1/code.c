// Your code here...
#include<stdio.h>
int main()
{
    int i,j,a,k=0,p;
    scanf("%d",&a);
    p=a;
    for(i=1;i<=a;i++)
    {
        for(j=p;j>0;j--)
        {
            printf(" ");
        }
        
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        p=p-1;
    }
}