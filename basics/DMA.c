#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;//initialization of a pointer
    int n,i;//variables

    printf("Enter number of elements: ");//printing the elements
    scanf("%d", &n);
    printf("Entered number of elements: %d\n",n);//printfunction

    ptr = (int*)malloc(n * sizeof(int));

    if( ptr == NULL) {
        printf("Memory not allocated.\n");//print function
        exit(0);
    }
    else {
        printf("Memory successfully allocated using malloc.\n");

        for(i=0; i<n ; ++i) {
            ptr[i] = i + 1;
        }
        
        printf("The elements of the array are: ");
        for(i=0; i<n; ++i) {
            printf("%d", ptr[i]);
        }
    }
    return 0;
}
