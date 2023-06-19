//C program to find sum of digits of a number
#include<stdio.h>
int main()
{
    int num, temp , rem ,sum=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("The summation of digits of a number: %d",sum);
    return 0;
}
