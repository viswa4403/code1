#include <stdio.h>

int main()
{
    int age;
    char name[10];
    printf("enter age:");
    scanf("%d",&age);
    printf("enter name:");
    scanf("%s",name);
    int rem=100-age;
    printf("%s will be turning 100 in %d years",name,rem);
    return 0;
}