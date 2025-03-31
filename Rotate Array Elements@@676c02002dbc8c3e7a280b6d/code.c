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
    k=-k;
    for(j=k;j<=a+k;j++)
    {
        printf("%d",ar[j]);
        printf("\n");
    }
    
}