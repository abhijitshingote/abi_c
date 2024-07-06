#include <stdio.h>
#define MAX_LENGTH 100



int main()
{
    // Read a line until EOF
    // In each line count characters and save to an array
    // function read_line should read and store a line & return the length of the line
    int read_line(char []);
    char current_line[MAX_LENGTH];
    int current_line_length;
    while ((current_line_length=read_line(current_line))>0)
    {
        printf("enter input:\n");
        printf("The current line is \n%s\n",current_line);
        printf("The length is %d\n\n",current_line_length);
    }
}

int read_line(char current_line[])
{
    int c;
    int i;
    i=0;
    while ((c=getchar()) != EOF && c!='\n')
    {
        current_line[i]=c;
        ++i;
    }
    if (c=='\n')
    {
        current_line[i]=c;
        ++i;
    }
    
    return i;
        

}
