#include<stdio.h>
 
unsigned int age =22;
unsigned int _age =25;
 
int main(){
    unsigned int age = 22;
    unsigned int *ptr = &age;

    unsigned int _age = 25;
    unsigned int *_ptr = &_age;

    printf("%p\n", (void *)ptr);
    ptr++;

    printf("%p\n", (void *)ptr);
    ptr--;

    printf("%p\n", (void *) ptr);

    ptr = &_age;

    printf("%d\n", ptr == _ptr);

    return 0;
}