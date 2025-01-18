// Documentation
/**                     
 * file: sum.c
 * author: you
 * description: program to find sum.
 */

// Link
#include <stdio.h>      
double convertTemp(double celsius);
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

float calcPercentage(int science, int maths, int sanskrit);  // Use float for precision

int main() {
    int sc, maths, sanskrit;

    // Ask the user for input
    printf("Enter marks for Science: ");
    scanf("%d", &sc);

    printf("Enter marks for Maths: ");
    scanf("%d", &maths);

    printf("Enter marks for Sanskrit: ");
    scanf("%d", &sanskrit);

    // Calculate and display the percentage
    printf("Percentage is: %.2f%%\n", calcPercentage(sc, maths, sanskrit));  // Print with 2 decimal places
    return 0;
}

float calcPercentage(int science, int maths, int sanskrit) {
    return (float)(science + maths + sanskrit) / 3;  // Cast to float for accurate division
}


int main(){
       double far=convertTemp(37);
       printf("far:%.6f\n",far);
       return 0;
}
double convertTemp(double celsius) {
       double far =celsius*(9.0/5.0)+32;
       return far;
 }


void function()
{
    int x = 10; // local variable
    printf("%d", x);
}

int main() 
{ function(); }
}

// Subprogram
int sum(int y) 
{
  return y + X;
}