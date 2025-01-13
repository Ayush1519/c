#include <stdio.h>
int main() {
    int day;
    printf("Enter day(1-7): ");
    scanf("%d",&day);

    switch(day){
        case 1:printf("Monday\n");
               break;
        case 2:printf("Tuesday\n");
               break;
        case 3:printf("Wednesday\n");
               break;
        case 4:printf("Thrusday\n");
               break;
        case 5:printf("Friday\n");
               break;
        case 6:printf("Saturday\n");
               break;
        case 7:printf("Sunday\n");
               break;

int age;
printf("Enter age: ");
scanf("%d",&age);

age>=18?printf("Is an adult"):printf("Not an adult");

for(int i=1;i<=10;i++){
    printf("%d\n",i);
}
        return 0;
        
    }
}

