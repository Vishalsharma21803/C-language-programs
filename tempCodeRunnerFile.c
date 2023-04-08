#include <stdio.h>
int main(){
    int myarray[]={5,3,9,7,6};
    int *samyak=myarray;  //( we do not use '&' for assigning array to pointer)
    printf("%p\n",*samyak);  //( we are printing the memory address of myarray)
    printf("%d\n",*samyak);  //( we are printing the value stores at myarray[0]  default case)
    printf("%d\n",*(samyak+1));  //( we are printing the value stores at myarray[0+1]== myarray[1])
    printf("%d\n",*(samyak+2));  //( we are printing the value stores at myarray[0+2]== myarray[2])
    
    //(we will use for loop to print all the values of array using pointer name)
    for(int i=0;i<5;i++){
        printf("%d | ",*(samyak + i));
    }

    return 0;
}