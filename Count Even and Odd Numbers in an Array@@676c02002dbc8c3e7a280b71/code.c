
#include<stdio.h>
int main()
{
    int e,o,i,n;

    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
    }
    printf("%d %d",e,o);
    return 0;
}