// C program to print strong numbers from start to end
#include <stdio.h>
int main()
{
    int num, temp, rem, i, sum=0, fact;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
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
    if(sum==num)
        printf("%d is a Strong number.",num);
    else
        printf("%d is a not Strong number.",num);

}
