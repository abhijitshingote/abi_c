#include <stdio.h>

int main()
{
    printf("hello, world\n");
    printf("Value of EOF -> %d\n",EOF);
    int c;
    while ((c=getchar()) != EOF)
    {
        putchar(c);
    }
    
}