
#include <stdio.h>
void main() {
    char name[9];
    char*i;
    printf("\n Abinivesh");
    gets(name);
    i=name;
    printf("\n Now printing the name:");
    while(*i!='\0')
    {
        printf("%c",*i);
        i++;
    }
}
