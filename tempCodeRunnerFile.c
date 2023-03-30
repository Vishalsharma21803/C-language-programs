#include <stdio.h>

int main(){
    int hold;
    int array[5]={21,36,11,45,23};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(array[j]<array[j+1]){
            hold=array[j];
            array[j]=array[j+1];
            array[j+1]=hold;

        }
        }
        
    }
    for(int j=0;j<5;j++){
        printf("%d |",array[j]);

    }
    return 0;
}
