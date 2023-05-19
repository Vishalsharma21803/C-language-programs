#include<stdio.h>
#include <string.h>
void m(float *p){
    printf("%f\n",*p);
}
int main(){
    int i=10,*p=51;
    m();
}
