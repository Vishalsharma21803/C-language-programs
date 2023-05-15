#include <stdio.h>
int cubeByValue(int n); // prototype
int main( void )
{
   int number = 6; // initialize number
   printf("The original value of number is %d", number);
   cubeByValue(number); // pass number by value
   printf( "\nThe new value of number is %d\n", number );
} // end main

int cubeByValue( int n )                                            
{                                                                   
    //cube local variable n and return value
   printf("%d",n);
   return 0;
}
