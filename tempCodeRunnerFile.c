#include <stdio.h>
struct car{
    char name[20];
    int seats;
    float price;
};
void main(){
    struct car mycar;
    printf("\nEnter car name of car: ");
    scanf("%s",&mycar.name);
    printf("\nEnter number of seats: ");
    scanf("%d",&mycar.seats);
    printf("\nEnter price: ");
    scanf("%f",&mycar.price);
    printf("%s %d %f",mycar.name,mycar.seats,mycar.price);
    printf("\nThe memory size of my car variable is: %d",sizeof(mycar));
    return 0;
}
