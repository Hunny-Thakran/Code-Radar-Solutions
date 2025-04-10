// Your code here...
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
    int loop=n/2;
    for(i=0;i<loop;i++)
    {
        for(j=1;j<n;j++)
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
    if(ar[n-2]==ar[n-1])
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",ar[n-1]);
    }
}