#include <stdio.h>
int main()
{
    FILE *file; // FILE - datatype     file - variable
    if (file = fopen("hello.txt", "a"))
    {
        if (fputs("he was a great personality.....", file) >= 0)
        {
            printf("file opened successfully in append mode and new content has been added to the old content");
        }
    }
    else
    {
        printf("Error!");
    }
    fclose(file);
    return 0;
}