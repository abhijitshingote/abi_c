#include <stdio.h>

int main()
{   
    int c,b,t,n;
    b=0;
    t=0;
    n=0;
      
    while ((c=getchar()) != EOF)
    {
          if (c==' ')
          {
            b++;
          }
          else if (c=='\t')
          {
            t++;
          }
          else if (c=='\n')
          {
            n++;
          }

    }
    printf("b=%d t=%d n=%d",b,t,n);
    
}