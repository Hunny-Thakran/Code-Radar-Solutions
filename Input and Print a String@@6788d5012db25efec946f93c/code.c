#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[40];
    printf("");
    scanf("%s",&s);
    printf("You entered: %s",s);
    return 0;
}