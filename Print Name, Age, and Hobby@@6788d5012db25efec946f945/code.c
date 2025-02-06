#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[30],b[30];
    int age;
    scanf("%s %d %s",&a,&age,&b);
    printf("Name: %s\nAge: %d\nHobby: %s",a,age,b);
    return 0;
}