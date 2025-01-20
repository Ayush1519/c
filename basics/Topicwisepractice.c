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
void reverse(int arr[],int n);
void printArr(int arr[],int n);
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factorial of %d is:%d\n", n,factorial(n));

    return 0;
}
int main() {
    int a,b, sum;
    sum = a+b;

    char ch;
    printf("Enter an alphabet\n: ");
    scanf("%c", &ch);

    ch=(ch>='A'|| ch<='Z')?ch+32:ch;

    switch(ch):
    CASE 'a':
    CASE 'e':
    CASE 'i':
    CASE 'o':
    CASE 'u':
    break;
    printf("%c is a vowel:%d\n", ch);
  default:
    if((ch>='a'|| ch<='z')){
        printf("%c is a consonant:%d\n",ch);
    } else{
        printf("Invalid input entered.Please enter different value\n");
    }

    int a=40;
    int sum=1;
    sum+=a;
     

    int multiplication=5;
    int division=8;
    multiplication*=a;
    division /= a;
    int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
    int sum=0, num;
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        sum += num;
    }

    printf("Sum: %d\nAnerage: %.2f\n", sum, sum/10.0);

    int numbers[10];
    int sum=0;
    float average;

    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++){
        printf("Enter numbers %d: ",i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average=(float)sum/10;

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factorial of %d is:%d\n", n,factorial(n));

    return 0;
}
    printf("\nSum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    int sc, maths, sanskrit;
    int arr[]={1,2,3,4,5};
    reverse(arr,5);
    printArr(arr,5);
   

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
       int marks[2][3];
       marks[0][0]=90;
       marks[0][1]=98;
       marks[0][2]=98;

       marks[1][0]=89;
       marks[1][1]=89;
       marks[1][2]=99;

       printf("%d\n",marks[0][0]);
              return 0;
}
double convertTemp(double celsius) {
       double far =celsius*(9.0/5.0)+32;
       return far;
 }


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void reverse(int *arr, int n) {
    for(int i=0;i<n/2;i++){
    int firstval=arr[i];
    int secondval=arr[n-i-1];
    arr[i]=secondval;
    arr[n-i-1]=firstval;
    }
}
#include <stdio.h>

int main() {
    int n, i;
    
    // Prompt user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Declare an array to store Fibonacci series
    int fib[n];
    
    // Initialize the first two terms
    fib[0] = 0;
    fib[1] = 1;
    
    // Generate the Fibonacci series
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    
    return 0;
}
// C program to print elements of a Three-Dimensional Array
#include <stdio.h>

int main() {
  
    // Create and Initialize the 3-dimensional array
    int arr[2][3][2] = { { { 1, 1 }, { 2, 3 }, { 4, 5 } },
                         { { 6, 7 }, { 8, 9 }, { 10, 11 } } };

      // Loop through the depth
    for (int i = 0; i < 2; ++i) {
      
          // Loop through the rows of each depth
        for (int j = 0; j < 3; ++j) {
          
              // Loop through the columns of each row
            for (int k = 0; k < 2; ++k)
                printf("arr[%i][%i][%i] = %d   ", i, j, k,
                       arr[i][j][k]);
              printf("\n");
        }
      printf("\n\n");
    }
    return 0;
}
 
// C Program to illustrate the 2D array
#include <stdio.h>

int main() {
  
    // Create and initialize an array with 3 rows
      // and 2 columns
    int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

    // Print each array element's value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
        }
          printf("\n");
    }
    return 0;
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