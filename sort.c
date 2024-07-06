#include <stdio.h>

#define MAXLINE 5
#define BUFFER_SIZE 5000
static char buffer[BUFFER_SIZE];
static char *p=buffer;
int get_line(char s[],int lim);
void copy_line_to_buffer(char *point,char currentline[]);
char *alloc(int len);

int main() {
    char currentline[MAXLINE];
    int length;
    char *point;
    // printf("Hello World");
    while ((length=get_line(currentline,MAXLINE))>0 && (point=alloc(length))!=0)
    {
        copy_line_to_buffer(point,currentline);
    }
    printf("%s",buffer);
    
}

void copy_line_to_buffer(char *point,char currentline[]) {
    int i = 0;
    while (currentline[i]!='\0')
    {
        *point=currentline[i];
        i++;
        point++;
    }
    
    *point=currentline[i];
    
}


char *alloc(int len) {
    if ((buffer+BUFFER_SIZE) - (p+len) > 0) {
        p+=len;
        return p - len;
    }
    else {
        return 0;
    }
}

int get_line(char s[], int lim)
{
    int c ,i ;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
    
}

