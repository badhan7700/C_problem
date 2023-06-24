//C program to print strong numbers between 1 to n
#include <stdio.h>
int main()
{
    int num1, num2, temp, rem, i, j, sum=0, fact;
    printf("Enter upper and lower limit:");
    scanf("%d %d",&num1, &num2);
    for(j=num1; j<=num2; j++)
    {
        temp=j;
        sum=0;
        while(temp!=0)
        {
            fact=1;
            rem =temp%10;
            for(i=1; i<=rem; i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==j)
            printf("%d ",j);
    }
}

