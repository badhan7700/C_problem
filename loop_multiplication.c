#include<stdio.h>
int main()
{
    int n1,i=1 ;
    printf("Enter the value ");
    scanf("%d", &n1);
    printf("The multiplication table of %d: \n", n1);
    while(i<=10)
    {
        printf("%d x %d= %d",n1 ,i, n1*i);
        printf("\n");
        i++;
    }
        return 0;
}
