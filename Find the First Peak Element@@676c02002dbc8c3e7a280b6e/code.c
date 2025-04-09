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
    for(i=1;i<n-1;i++)
    {
        if(ar[j]<ar[i]>ar[k])
        {
            printf("%d",ar[i]);
            break;
        }
        j++;
        k++;
    }
    return 0;
}