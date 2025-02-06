#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    float sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("Average: %.2f",sum/3.0);
    return 0;
}