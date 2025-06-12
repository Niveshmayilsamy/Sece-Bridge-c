// Fibonacci Series
#include <stdio.h>

int main() {
    int n,first=0,second=1,next;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for(int i=1;i<=n;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}
