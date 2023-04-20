#include <stdio.h>
int main(){
    FILE *file;
    if (file =fopen("hello.txt","w")){
        if(fprintf(file, "he was the best of the best personalities.........")>=0)
        printf("weite operation successfull");
    }
    fclose(file);
    return 0;
}