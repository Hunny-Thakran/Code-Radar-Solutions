// Your code here...
#include<stdio.h>
int main()
{
    int a,i,j,k=1;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(ar[i]>ar[j])
            {
                printf("Not Sorted");
                k=0;
                break;
                
            }
        }
    }
    if(k==1)
    {
        printf("Sorted");
    }
}