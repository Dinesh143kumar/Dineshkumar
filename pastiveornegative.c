#include<stdio.h>
void main()
{
    int num;
        printf("Enter a num: \n");
        scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a positive num \n", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative num \n", num);
    }
    else
    {
        printf("0 is neither positive nor negative");
}}
