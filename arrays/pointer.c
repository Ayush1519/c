#include<stdio.h>
 
//Declaring primitive data types
unsigned int age =22;
unsigned int _age =25;
 
int main() { //main function
    //Using pointer to store age
    unsigned int age = 22;
    unsigned int *ptr = &age;//pointer 

    unsigned int _age = 25;
    unsigned int *_ptr = &_age;

    printf("%p\n", (void *)ptr);
    ptr++;

    printf("%p\n", (void *)ptr);//print function
    ptr--;

    printf("%p\n", (void *) ptr);

    ptr = &_age;

    printf("%d\n", ptr == _ptr);

    return 0;
}
