#include <stdio.h>

int main() {

    int c,pb;
    pb=0;
    while ((c=getchar()) != EOF )
    {
        if (c!=' ')
        {
            putchar(c);
            pb=0;
        }
        else if (pb==0)
        {
            putchar(c);
            pb=1;
        }
        

        
    }
    
}
