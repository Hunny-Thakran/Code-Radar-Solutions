// Your code here...
#include<stdio.h>
int main()
{
    int i,j,k,sp,a,star;
    scanf("%d",&a);
    k=a;
    for(i=1;i<=a;i++)
    {
        for(sp=1;sp<k;sp++)
        {
            printf("_");
        
        }
        star=2*i-1;
        for(j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        k=k-1;
    }
    printf("\n");
}