// Your code here...
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("Profit");
    }
    else if(a==b)
    {
        printf("No Progit No Loss");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}