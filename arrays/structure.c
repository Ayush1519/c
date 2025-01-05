#include<stdio.h>
int strcmp();
int main() {
    char firststr[] = "Apple";
    char secstr[] = "Banana";
    printf("%d\n", strcmp(firststr,secstr));
    printf("%d\n",strcmp(secstr,firststr));
}