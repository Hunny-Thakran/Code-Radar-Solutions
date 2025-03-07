// Your code here...
#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(65>=a && a<=90)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}