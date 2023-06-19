//Write a C program to find sum of all odd numbers between n to n.
#include<stdio.h>
int main()
{
    int n1, n2, i, sum=0;
    printf("Enter the upper and lower limit: ");
    scanf("%d %d", &n1, &n2);
    i=n1;
    while(i<=n2)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    printf("The sum of (%d-%d) = %d", n1 ,n2, sum);
        return 0;
}
