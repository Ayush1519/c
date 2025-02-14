#include<stdio.h>
#include<string.h>
int strcmp();
int countLength(char arr[]);
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;//count variable 
    }
    return count-1;
}

struct Person {
    char name[50];
    int age;
    float height;
};

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}


int main() {
    char firststr[] = "Apple";
    char secstr[] = "Banana";
    printf("%d\n", strcmp(firststr,secstr));
    printf("%d\n",strcmp(secstr,firststr));

    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr,oldstr);
    puts(newstr);

    char first1str[100] = "Good";
    char secondstr[] = "Morning";
    strcat(first1str,secondstr);
    puts(first1str);
    
    char name[] = "Ayush";//character name declared
    int length = strlen(name);
    printf("Length is: %d",length);
    return 0;

    char Name[] = "Ayush";//character name declared
    int length1 = strlen(Name);
    printf("Length is: %d",length1);
    

    struct Person person1;

    person1.age = 25;
    person1.height = 5.9;
    snprintf(person1.name, sizeof(person1.name), "John Doe");

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    
    struct Person person1 = {"John Doe", 30, 5.9};
    printPerson(person1);

    return 0;
}

