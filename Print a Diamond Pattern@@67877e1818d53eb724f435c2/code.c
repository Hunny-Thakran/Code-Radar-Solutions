// Your code here...
#include<stdio.h>
int main()
{
    int i,j,k,sp,a;
    scanf("%d",&a);
    k=a;
    for(i=1;i<=a;i++)
    {
        for(sp=1;sp<k;sp++)
        {
            printf("*");
        
        }
        printf("\n")
        k=k-1;
    }
    printf("\n");
}