#include <stdio.h>
void printString(char arr[]);
int main() {
       char firstName = {"AYUSH"};
       char secondName = {"SINGH"};

       printString(firstName);
       printString(secondName);
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
    }

int age;
printf("Enter age: ");
scanf("%d",&age);

age>=18?printf("Is an adult"):printf("Not an adult");

for(int i=1;i<=10;i++){
    printf("%d\n",i);
}

for(int i=10;i>=1;i--){
    printf("%d\n",i);
}

int i=0;
while(i<=5){
    printf("%d\n",i);
    i++;

}
int i=0;
do{
   printf("Hello people\n");
   i++;
} while(i>=5);

int n;
printf("Enter number: ");
scanf("%d",&n);

int sum = 0;
for(int i=0;i<=n;i++){
       sum = sum + i;
}

printf("Sum is:%d\n",sum);
int sum=0;        
for(int j=n;j>=1;j--){
       sum=sum+j;
}
printf("Sum is: %d\n",sum);
for(int i=0;i<=10;i++ ){
       printf("%d\n",n*i);
}

for(int j=10;j>=1;j--){
       printf("%d\n",n*j);
}
int fact=1;
for(int i=0;i<=n;i++){
       fact=fact*i;
}
printf("Factorial is:%d\n",fact);

for(int i=1;i<=5;i++){
       if(i==3){
       break;
       }
       printf("%d\n",i);
}
printf("end");
return 0;
}

void printString(char arr[]){
       for(int i=0;arr[i] != 0;i++){
              printf("%c",arr[i]);
       }
     printf("\n");
}