//C program to check Leap Year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any Year: ");
    scanf("%d", &year);
    if(year%400==0)
        printf("%d is leap Year", year);
    else if (year%4==0 && year%100!=0)
        printf("%d is leap Year", year);
    else
        printf("%d is not leap Year", year);
    return 0;
    //if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
}

