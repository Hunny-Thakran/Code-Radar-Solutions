// Your code here...
#include<stdio.h>
int main()
{
    int a,i,j,sp,k;
    scanf("%d",&a);
    k=a;
    for(i=1;i<=a;i++)
    {
        for(sp=1;sp<k;sp++)
        {
            printf(" ");
        }
        k=k-1;
        for(j=1,j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}