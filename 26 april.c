//  string is a pointer variable

#include <stdio.h>
int main(){
    char carname[20];
    printf("Enter the name of your car: ");
    scanf("%s",carname);
    printf("\nName of your car is %s",carname);
    
}

//__________________________________________________________

// puts -- printf      gets --- scanf(to input full string)

#include <stdio.h>
void main(){
    char name[100];
    puts("\nEnter your name: ");
    gets(name);  // name mein store karenge input ko

    printf("\nstring is: ");
    puts(name);  // to output constant string

}

//_______________________________________________________________

#include <stdio.h>
int main(){
    char ary[]="discovery channel";
    printf("%s",ary);
    return 0;
}

//_______________________________________________________________