#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[40];
    printf("");
    scanf("%c",&s);
    printf("You entered: %c",s);
    return 0;
}