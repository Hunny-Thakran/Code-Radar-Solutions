// Your code here...
#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u')
    {
        printf("Vowel");
    }
    else if('a'>a<='z')
    {
        printf("Consonant")
    }
    else if(1<=a>=9)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}