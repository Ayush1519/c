// Documentation
/**                     
 * file: sum.c
 * author: you
 * description: program to find sum.
 */

// Link
#include <stdio.h>      

// Definition
#define X 20 

// Global Declaration
int sum(int y);   

// Main() Function
int main(void)       
{
  int y = 55;
  printf("Sum: %d", sum(y));
  return 0;
  // C program to declare and print local variable inside a
// function.
#include <stdio.h>

void function()
{
    int x = 10; // local variable
    printf("%d", x);
}

int main() { function(); }
}

// Subprogram
int sum(int y) 
{
  return y + X;
}