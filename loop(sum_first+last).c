//Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
int main()
{
    int num, last, first, sum;
    printf("Enter any a number : ");
    scanf("%d", &num);
    last = num%10;
    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    sum= first+last;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
