#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <c type>
void printString(char arr[]);//printing String
void printTable(int n);
#define MAX 50
void printStr(char str[]) {printf(String is:%s,str);
//Some declarations
//functions
void count_vowels_and_consonants(char* str){//function to count vowels and constants
    int vowels = 0, consonants = 0;
    int i;
    char ch;
    for( i=0; str[i] != '\0'; i++){
        ch = str[i];
        if(ch == 'a'||ch == 'e'||ch =='i'||ch =='o'||ch =='u'
        ||ch =='A'||ch =='E'||ch =='I'||ch =='0'||ch =='U')
        vowels++;

        else if(ch == ' ')
            continue;
    
        else 
            consonants++;
    }
    printf("\nVowels: %d", vowels); 
    printf("\nConsonants: %d", consonants);

}
void stringcount(char* s)
{
    static int i, vowels = 0, consonants = 0;
 
    if (!s[i]) {
        printf("\nVowels: %d\n", vowels);
        printf("Consonants: %d\n", consonants);
        return;
    }
    else {
        if ((s[i] >= 65 && s[i] <= 90)
            || (s[i] >= 97 && s[i] <= 122)) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
                || s[i] == 'o' || s[i] == 'u' || s[i] == 'A'
                || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
                || s[i] == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
        stringcount(s);
    }
}

void swapNumbers(int *a, int*b){
    int temp = *a;
    *a=*b;
    *b=temp;
};

#include <stdio.h>
// C program to demonstrate working of tmpfile() 
#include <stdio.h> 
int main() 
{ 
	char str[] = "Hello GeeksforGeeks"; 
	int i = 0; 

	FILE* tmp = tmpfile(); 
	if (tmp == NULL) 
	{ 
		puts("Unable to create temp file"); 
		return 0; 
	} 

	puts("Temporary file is created\n"); 
	while (str[i] != '\0') 
	{ 
		fputc(str[i], tmp); 
		i++; 
	} 

	// rewind() function sets the file pointer 
	// at the beginning of the stream. 
	rewind(tmp); 

	while (!feof(tmp)) 
		putchar(fgetc(tmp)); 
} 


unsigned int factorial(unsigned int N) {
    int fact = 1, i;

    // Loop from 1 to N to get the factorial
    for (i = 1; i <= N; i++) {
        fact *= i;
    }

    return fact;
}

// Function to multiply a string (representing a number)
// by an integer
void multiplyString(char num[], int factor) {
    int len = strlen(num);
    int carry = 0;

    for (int i = len - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        int product = digit * factor + carry;
        num[i] = (product % 10) + '0';
        carry = product / 10;
    }

    // Handling the carry by adding digits to the front
      // of the number
    while (carry) {
        for (int i = strlen(num); i >= 0; i--) {
            num[i + 1] = num[i];
        }
        num[0] = (carry % 10) + '0';
        carry /= 10;
    }
}


void factorialString(int N) {

    char fact[1000];

    strcpy(fact, "1");

    for (int i = 2; i <= N; i++) {

        multiplyString(fact, i);
    }

    printf("Factorial of %d is %s", N, fact);
}
unsigned int factorial(unsigned int n) {
  
    // Base Case:
    if (n == 1) {
        return 1;
    }


    return n * factorial(n - 1);
}


int main() {
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    factorialString(N);
    int fact = factorial(N);
    printf("Factorial of %d is %d", N, fact);

    int sum; 
    char name[50];
    printf("Enter the length of the name: ");
    scanf("%d", &sum);
    if (sum > 50) {
        printf("Name is too long! Max length is 50 characters.\n");
        return 1;
    } printf("Enter the name: ");
    for (int i = 0; i < sum; i++) {
        scanf(" %c", &name[i]);  
    } name[sum] = '\0';
        int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
        
    int n;
    printf("Enter the number of waves: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n; j++) {
            if (j == i || j == 2 * n - i + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("The name is: %s\n", name);
    printf("Namaste India");
    printf("Hello world");
    printf("Bonjour");
    printf("How are you!");
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the number: ");
    scanf("%d", &b);
    int c;
    c=a+b;
    scanf("%d", &c);
    printf("%d", c);
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int matrix1[n][n];
    int matrix2[n][n];

    
    printf("Enter the elements of the matrix: ");
    for(int = 0; i < n; i++){
        for(int j = 0; j = n; j++){
            scanf("%d\n", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d\n", &matrix2[i][j]);
        }
    }

    printf("\nSum of the two matrix are\n:");
    for(int i=0;i<n; i++){
        for(int j =0 ;j<n; j++){
            printf("%d\n", matrix[i][j] + matrix2[i][j]);
        }
    }

    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swapping a and b are %d and %d\n", a, b);
    swapNumbers(&a, &b);
    printf("After swapping a and b are %d and %d", a, b);

    return 0;





    printf("Enter the elements of the matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d\n", &matrix[i][j]);
        }
    }

    printf("Transpose of the matrix is: ");
        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\n", matrix[i][j]);
        }
    } 



    char sentence[100]; 
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

        for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '.') {
            sentence[i] = ':';  // Replace '.' with ':'
        }
    }
    printf("Modified sentence: %s", sentence);
    char s[1000] = "Geeks for Geeks";
    printf("String: %s", s);
    char s[1000] = "geeks for geeks", *p;
    int vowels = 0, consonants = 0;
 
    p = s;
 
    while (*p) {
        if ((*p >= 65 && *p <= 90)
            || (*p >= 97 && *p <= 122)) {
            if (*p == 'a' || *p == 'e' || *p == 'i'
                || *p == 'o' || *p == 'u' || *p == 'A'
                || *p == 'E' || *p == 'I' || *p == 'O'
                || *p == 'U')
                vowels++;
            else
                consonants++;
        }
        p++;
    }
 
    printf("String: %s", s);
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
       char* str = "geeks for geeks"; 
       printf("String: %s", str); 
 
       count_vowels_and_consonants(str);
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
       char c = 'a';
       char *r = &c;
       printf("r = %u\n", r);   
       r++;
       printf("r++ = %u\n", r);   
       r--;
       printf("r-- = %u\n", r);
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
        FILE *ptr;
    char ch;

    ptr = fopen("file.txt", "w");

    if(ptr == NULL){
        printf("Error in opening file!\n");
        return 1;
    }

    printf("Enter characters (press enter to stop):\n");

    while(1) {
        ch= getchar();

        if(ch == '\n') {
            break;
        }

        fputc(ch, ptr);
    }
    fclose(ptr);
    printf("Characters have been to 'filec.txt'.\n");
    int marks[5] = {90,92,97,95,94};

        for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
    return 0;
}

void printTable(int n){
       for(int i=1; i<=10; i++){
              printf("%d\n", n*i);
       }
}
