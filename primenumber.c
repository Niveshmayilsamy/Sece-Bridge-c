// Online C compiler to run C program online
#include <stdio.h>

int main() {
int num,i,isprime=1;
printf("Enter a Number:");
scanf("%d",&num);
if(num<=1)
{
    isprime=0;
}
else
{
    for(i=2;i<=num/2;i++)
    {
        isprime=0;
        break;
    }
}
if(isprime)
{
    printf("%d is a prime number.\n",num);
}
else
    {
        printf("%d is not a prime number.\n",num);
    }
    
}

