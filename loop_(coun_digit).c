//C program to count number of digits in an integer.
#include<stdio.h>
int main()
{
    int num, temp, count=0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    temp=num;
    while(temp!=0)
    {
        temp/=10;
        count++;
    }
    printf("The number of digits in a integer= %d",count);
}
