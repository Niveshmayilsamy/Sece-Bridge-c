#include <stdio.h>

int main() {
    char op ='+';
    int a,b;
    printf("Enter any two values: ");
    scanf("%d%d",&a,&b);
    
    switch(op)
    {
        case '+':printf("Result=%d\n",a+b);break;
        case '-':printf("Result=%d\n",a-b);break;
        case '*':printf("Result=%d\n",a*b);break;
        case '/':printf("Result=%d\n",a/b);break;
        case '%':printf("Result=%d\n",a%b);break;
        default:printf("Invalid operator");break;
        
    }
    return 0;
}
