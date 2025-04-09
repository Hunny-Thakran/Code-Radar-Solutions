// Your code here...
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int j=0;
    int k=2;
    int m=-1;
    for(i=1;i<n;i++)
    {
        if(ar[j]<ar[i] && ar[i]>ar[k])
        {
            printf("%d",ar[i]);
            break;
        }
        j++;
        k++;
        if(i==n-1)
        {
            printf("%d",ar[i]);
        }
        if(ar[i]==ar[j])
        {
            printf("%d",m);
        }
    }
    return 0;
}