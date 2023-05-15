#include <stdio.h>
int cubeByValue(int n); // prototype
int main( void )
{
   int number = 6; // initialize number
   printf("The original value of number is %d", number);
   cubeByValue(5); // pass number by value
   printf( "\nThe new value of number is %d\n", n );
} // end main

int cubeByValue( int n )                                            
{                                                                   
   return n*n*n; //cube local variable n and return value
}
