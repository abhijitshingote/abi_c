// #include <stdio.h>

// #define MAXLINE 5

// int get_line(char s[],int lim);

// int main() {
//     char currentline[MAXLINE];
//     int length;
//     // printf("Hello World");
//     while ((length=get_line(currentline,MAXLINE))>0)
//     {
//         printf("%s",currentline);
//     }
    
// }


// int get_line(char s[],int lim) {
//     int i,c;
//     for (i = 0; i < lim -1 && (c=getchar())!= EOF; ++i)
//     {
//         s[i]=c;
//     }

//     s[i]='\0';

//     return i;
    

// }

#include <stdio.h>
#define MAXLINE 5

int length(char s[], int lim);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = length(line, MAXLINE)) > 0) {
        // if (len > max) {
        //     max = len;
        //     copy(longest, line);
        // }
        printf("%s", line);
        printf("\n");
    }

    // if (max > 0) {
    //     printf("%s", longest);
    // }

    return 0;
}

int length(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF ; ++i) {
        s[i] = c;
    }


    s[i] = '\0';
    return i;
}

void copy(char to[], char from []) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
