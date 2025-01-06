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

    return 0;
}
