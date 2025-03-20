// Your code here...
#include<stdio.h>
int main()
{
    int e,o,i,n;
    e=0;
    o=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
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
    return 0;
}