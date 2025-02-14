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

struct Book {
    char title[100];
    char author[50];
    float price;
};

void inputBookDetails(struct Book *b) {
    printf("Enter book title: ");
    fgets(b->title, sizeof(b->title), stdin);
    
    printf("Enter author name: ");
    fgets(b->author, sizeof(b->author), stdin);
    
    printf("Enter book price: ");
    scanf("%f", &b->price);
    getchar(); 
}

void displayBookDetails(struct Book b) {
    printf("\nBook Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Price: %.2f\n", b.price);
}

#include <math.h>

struct Shape {
    char type[20];
    float radius; 
    float length;    
    float breadth;  
};

float calculateCircleArea(struct Shape s) {
    return M_PI * s.radius * s.radius;
}

float calculateRectangleArea(struct Shape s) {
    return s.length * s.breadth;
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

    struct Book book1;
    inputBookDetails(&book1);
    displayBookDetails(book1);
    
    struct Shape shape1;

    printf("Enter shape type (Circle/Rectangle): ");
    fgets(shape1.type, sizeof(shape1.type), stdin);
    
    if (strncasecmp(shape1.type, "Circle", 6) == 0) {
        printf("Enter radius of the circle: ");
        scanf("%f", &shape1.radius);
        
        printf("Area of the circle: %.2f\n", calculateCircleArea(shape1));
    } else if (strncasecmp(shape1.type, "Rectangle", 9) == 0) {
        printf("Enter length of the rectangle: ");
        scanf("%f", &shape1.length);
        
        printf("Enter breadth of the rectangle: ");
        scanf("%f", &shape1.breadth);
        
        printf("Area of the rectangle: %.2f\n", calculateRectangleArea(shape1));
    }
    return 0;
}

