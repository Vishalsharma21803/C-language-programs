#include <stdio.h>
int main(){
    FILE *file;
    if (file =fopen("hello.txt","w")){
        fputc('H',file);
    }
    fclose(file);
    return 0;
}
