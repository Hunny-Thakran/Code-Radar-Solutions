// Your code here...
#include<stdio.h>
int main()
{
    int a,b;
    char c;
    
    scanf("%d %d %d",&a,&b,&c);
   
    switch(c)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        
    }

}