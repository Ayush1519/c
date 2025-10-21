#include <stdio.h>
int main() {
    // // Define variables
    // char name[50];
    // int age;
    // float height;

    // // Open file for writing
    // FILE *file = fopen("person.txt", "w");
    // if (file == NULL) {
    //     printf("Error opening file for writing.\n");
    //     return 1;
    // }

    // // Assign values to variables
    // snprintf(name, sizeof(name), "Ayush singh");
    // age = 19;
    // height = 5.9;

    // // Write data to file
    // fprintf(file, "Name: %s\nAge: %d\nHeight: %.1f\n", name, age, height);
    // fclose(file);

    // // Open file for reading
    // file = fopen("person.txt", "r");
    // if (file == NULL) {
    //     printf("Error opening file for reading.\n");
    //     return 1;
    // }

    // // Read data from file
    // fscanf(file, "Name: %s\nAge: %d\nHeight: %f\n", name, &age, &height);
    // fclose(file);

    // // Print the read data
    // printf("Read from file:\n");
    // printf("Name: %s\n", name);
    // printf("Age: %d\n", age);
    // printf("Height: %.1f\n", height);
    
    char name[50];//char array declared
    int age;
    float height;

    FILE *file= fopen("person.text", "w");
    if(file==NULL){//conditionals
        printf("Error opening file for writing.\n");
        return 1;
    }

    snprintf(name ,sizeof(name), "Ayush singh");
    age = 19;//variable
    height = 5.9;

    fprintf(file,"Name: %s\nAge: %d\nHeight: %f\n", name, age, height);
    fclose(file);


    file= fopen("person.text", "r");
    if(file == NULL){
        printf("Error in opening file for reading.");
        return 1;
    }

    fscanf(file," Name: %s\nAge: %d\nHeight: %f\n", name, &age, &height);
    fclose(file);

    printf("Read from file:\n");
    printf("Name: %s\n",name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    
    int a;
    int b;
    int sum;
    sum = a+b;
    scanf("%d", &sum);
    printf("Sum",%d);
    return 0;
}
//End.
