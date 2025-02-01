#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printString(char arr[]);//printing String
void printTable(int n);
#define MAX 50
void printStr(char str[]) {printf(String is:%s,str);
}
int main() {
       int a=5;
       int b=6;
       int sum =a+b;
       printf("%d\n",sum);
       int a=8;
       int b=5;
       int m =5;
       int *ptr = &m;
       printf("%d\n", m);
       printf("%p\n", &m);
       printf("%p\n", ptr);
       int a=8;
       int *ptr;
       ptr= &a;
       printf("ptr=%p\n", ptr);
       printf("ptr=%d\n", *ptr);
       int *s= "Ayush";
       printf("%s", s);
       int a = 22;
       int *p = &a;
       printf("p = %u\n", p); 
       p++;
       printf("p++ = %u\n", p);
       p--;
       printf("p-- = %u\n", p);
       float b = 22.22;
       float *q = &b;
       printf("q = %u\n", q);  
       q++;
       printf("q++ = %u\n", q); 
       q--;
       printf("q-- = %u\n", q);
       int substraction=a-b;
       int multiplication=a*b;
       int division=a/b;
       printf("%d\n",division);
       printf("%d\n",multiplication);
       printf("%d\n",substraction);
       char firstName = {"AYUSH"};
       char secondName = {"SINGH"};

       printString(firstName);
       printString(secondName);
       puts(firstName);
       puts(secondName);

       fgets(firstName);

       do{
              printf("%d",i);
              i++;
       }while(int i = 2)

       int a=5;
       int b=4;
       int c;
       c=a;
       a=b;
       b=c;
       printf("%d\n",a);
       printf("%d\n",b);
       
       int sum =a+b;

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

    // Define variables
    char name[50];
    int age;
    float height;

    // Open the file for writing (creating a new file or overwriting existing)
    FILE *file = fopen("person.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1; // Return if there is an error opening the file
    }

    // Prompt user for input
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // Read name with spaces
    name[strcspn(name, "\n")] = '\0'; // Remove newline character if it is read

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height (in meters): ");
    scanf("%f", &height);

    // Write the data to the file using fprintf
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Height: %.2f meters\n", height);

    // Close the file after writing
    fclose(file);

    // Reopen the file for reading
    file = fopen("person.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1; // Return if there is an error opening the file
    }

    // Read the data back from the file using fscanf
    printf("\nData read from the file:\n");
    char buffer[100];  // Temporary buffer to read the lines

    // Read and print each line from the file
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    // Close the file after reading
    fclose(file);

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printTable(n);
    int age =25;
    int *ptr =&age;
    int _age= *ptr;

    printf("%d", _age);
    printf("%p", &age);
    printf("%u", &age);

    printf("%u", *ptr);
    printf("%u", &ptr);
    int x;
    int *ptr;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    char str[50];

    scanf("%s", str);

    printf("%s", str);

    char str[MAX];

    // MAX Size if 50 defined
    fgets(str, MAX, stdin);

    printf("String is: \n");

    // Displaying Strings using Puts
    puts(str);

    char str[] = "AyushSingh";

    printStr(str);
    char str1[20]="GeeksforGeeks";

    char *ptr=str;

    while(*ptr != '\0'){
        printf("%c", *ptr);

        ptr++;
    }

    char arr[3][10] = {"Monika", "Rohit",
                       "Ayushsingh"};
  
    for (int i = 0; i < 3; i++)
        printf("%s\n", arr[i]);
           FILE *filepointer;
    char datatobewritten[50]="Welcome to my workspace.";

    filepointer=fopen("File.txt", "w");
    if(filepointer==NULL){
        printf("The File 'File.txt' was not found.");
    }
    else{
        printf("The File is now opened.\n");
    }
    if(strlen(datatobewritten)>0){
        fputs(datatobewritten, filepointer);
        fputs("\n", filepointer);
    } fclose(filepointer);
    printf("Data successfully written in yhe file'File.txt'.\n");
    printf("The file is now closed.");
    
    FILE *fptr;
    fptr=fopen("file.txt", "w");
    if(fptr == NULL){
        printf("File not opened. The program will exit now");
        exit(0);
    }
    else{
        printf("File created successfully.");
    }
    //fclose is used to close the file.
    fclose(fptr);
    return 0;
}

void printTable(int n){
       for(int i=1; i<=10; i++){
              printf("%d\n", n*i);
       }
}
