#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
   
    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(ar[i]>ar[j])
        {
            k=ar[i];
            ar[i]=ar[j];
            ar[j]=k;
            
        }
        }
    }
 
    int a=-1;
    if(n-2<0)
    {
        printf("%d",a);
    }
    else if(ar[n-2]==ar[n-1])
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",ar[n-2]);
    }
}