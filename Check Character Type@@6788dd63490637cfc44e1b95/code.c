// Your code here...
#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("Vowel");
    }
    else if('a'>a<='z')
    {
        printf("Consonant");
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