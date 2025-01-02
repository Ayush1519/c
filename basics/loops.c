#include<stdio.h>

 int factorial(int n) {

if(n == 1){
   return 1;
}

return n * factorial(n-1);
}

int main(){
    for(int i=1;i<6;i++){
        for(int j=1;j<i;j++){
            printf("%s","*");
        }
        printf("\n");
    }
    
   for( int i = 0 ; i < 6; i++) {
    printf("****\n");
   }

    int num = 5;
    printf("Factorial of %d is %d" ,num,factorial(num));
    return 0;
}

