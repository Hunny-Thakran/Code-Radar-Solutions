// Your code here...
#include<stdio.h>
int main()
{
    int i,j,a,k=0,;
    scanf("%d",&a);
    p=a
    for(i=1;i<=a;i++)
    {
        for(j=p;j>0;j--)
        {
            printf(" ");
        }
        k=2*i-1;
        for(j=k;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
        p=p-1
    }
}