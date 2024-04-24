#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int s1, s2, result;

    printf(" Enter number: "); 
    scanf("%d", &s1);
    printf(" Enter number: "); 
    scanf("%d", &s2);
    int *p1, *p2;

    p1=&s1;
    p1=&s2;

    result= *p1+*p2;

    printf("Result : %d", result);

    return 0;

}