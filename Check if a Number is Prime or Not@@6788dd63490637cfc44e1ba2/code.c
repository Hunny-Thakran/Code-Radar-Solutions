// Your code here...
#include<stdio.h>
int main()
{
    int a,isprime=1; 
    scanf("%d",&a);
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            printf("Not Prime");
            isprime=0
            break;
        }
    }
    if(isprime)
    {
        printf("Prime");
    }
    return 0;
} 