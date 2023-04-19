#include <stdio.h>
int main(){
    FILE *file;
    if (file = fopen("hello.txt","r+")){
        printf("file opened successfully in read and write mode both");

    }
    else{
        printf("this file is not present");
    }
    fclose(file);
    return 0;
}