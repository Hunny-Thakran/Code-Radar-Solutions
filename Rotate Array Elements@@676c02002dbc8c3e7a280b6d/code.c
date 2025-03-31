// Your code here...
#include<stdio.h>
int main()
{
    int a,k,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    k=-k;
    printf("%d",k);
    for(i=k;i<=a+k;i++)
    {
        printf("%d",ar[i]);
    }
    
}