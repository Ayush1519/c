#include <stdio.h>
#include <string.h>

typedef struct student  {
    int roll;
    float cgpa;
    char name[100];
} stu ;

typedef struct computerengineeringstudent  {
     int roll;
     float cgpa;
     char name[100];
} coe;


 
void printInfo(struct student s1);

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100]; 
};
 
struct vector {
    int x;
    int y;
};

void clacSum(struct vector v1, struct vector v2, struct vector sum);

struct complex {
    int real;
    int img;
};

typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc ;

int main() {

     struct student s1;

     strcpy(s1.name,"ayush");
     s1.roll = 21;
     s1.cgpa = 9.4;

     printf("student info : \n");
     printf("name = %s\n",s1.name);
     printf("roll no =%d\n", s1.roll);
     printf("cgpa = %f\n", s1.cgpa);

     struct student IT[60];
     struct student COE[60];
     struct student ECE[60];

     struct student s2 = {"Ayush",1214, 9.8};
     struct student s3 = {0};

     printf("roll no of s2 = %d\n", s2.roll);
     printf("roll no of s3 = %d\n", s3.roll);

     struct student *ptr = &s1;
     printf("student.name = %s\n", (*ptr).name);
     printf("student.roll = %d\n", (*ptr).roll);
     printf("student.cgpa = %f\n", (*ptr).cgpa);

     printf("student->name = %s\n",ptr->name);
     printf("student->roll = %d\n",ptr->roll);
     printf("student->cgpa = %f\n",ptr->cgpa);

     printInfo(s1);

     coe student1;
     student1.roll = 1214;
     student1.cgpa = 9.8;
     strcpy(student1.name, "sudhir");



     acc acc1 = {123, "Ayush"};
     acc acc2 = {124, "Ankit"};
     acc acc3 = {125, "Shradha"};

     printf("acc no = %d", acc1.accountNo);
     printf("name = %s", acc1.name);
     return 0;
}

void printInfo(struct student s1) {
    printf("student info: \n");
    printf("name = %s\n",s1.name);
    printf("roll no = %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);

    s1.roll =1214;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum)  {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is: %d\n", sum.x);
    printf("sum of y is: %d\n", sum.y);
}