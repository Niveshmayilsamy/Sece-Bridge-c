#include<stdio.h>
int main()
{
    int num;
    int fact=1;
    printf("Enter a number to find factorial:");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d = %d\n",num, fact);
    return 0;
}
