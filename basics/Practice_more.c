#include<stdio.h>

int main() {
    int size = 0;
    scanf("%d", &size);

    if (sizeof(int) == 4) {
        size = 4;
    } 
    else if (sizeof(float) == 4) {
        size = 4;
    }
    else if (sizeof(double) == 8) {
        size = 8;
    }
    else if (sizeof(char) == 1) {
        size = 1;
    }

    printf(" %d\n", size);

    float originalamount,discountamount,finalamount;
    scanf("%f",&originalamount);
    
    discountamount=0.00;
    
    if(originalamount<=1000){
    }
    else if(originalamount>1000&&originalamount<=5000){
        discountamount=(originalamount * 10)/100;
    }
    else if(originalamount>5000){
        discountamount=(originalamount * 20)/100;
    }
    
    finalamount=originalamount-discountamount;
    
    printf("Original Amount: %.2f\n",originalamount);
    printf("Discount: %.2f\n",discountamount);
    printf("Final Amount: %.2f\n",finalamount);

    return 0;
}
