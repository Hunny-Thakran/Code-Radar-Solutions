// Your code here...
#include<stdio.h>
int main()
{
    int a,k,i,j;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    k=k-1;
    for(j=k;j<a;j++)
    {
        printf("%d",ar[j]);
        printf("\n");
    }
    for(j=1;j<k;j++)
    {
        printf("%d",ar[j]);
        printf("\n");
    }
    
}