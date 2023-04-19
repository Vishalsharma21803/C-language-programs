#include <stdio.h>
int main(){
    FILE *file;  // FILE - datatype     file - variable
    if (file = fopen("vishal.txt","r")){
        printf("file opened successfully in read mode");
}
else{
    printf("the file is not present");
    }
    fclose(file);
    return 0;
    }
