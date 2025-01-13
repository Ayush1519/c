#include <stdio.h>
#include <ctype.h> // For handling case insensitivity

void slice(char str[], int n, int m);
int countVowel(char str[]);

int main() {
        int i=0;
        for(i=10; i>=0; i--){
            printf("%d\n",i+1);
        }
        for(i=0;i<=10;i++){
            printf("%d\n",i+1);
        }
    char j;
    char A = 'A',Z = 'Z';

    for(j=A;j<=Z;j++){
        printf("%c\n",j);

    }
    for(j=Z;j>=A;j--){
        printf("%c\n",j);

    }
    int i;
    int j;
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=0;i--){
        for(j=i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++){

        for(spaces=1;spaces<=4-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    int marks;
    printf("Enter marks(0-100): ");
    scanf("%d",&marks);

    if(marks<=100&&marks>=95){
        printf("Grade:A+");
    }
    else if(marks<95&&marks>=90){
        printf("Grade:A");
    }
    else if(marks<90&&marks>=80){
        printf("Grade:B");
    }
    else if(marks<80&&marks>=70){
        printf("Garde:C");
    }
    else if(marks<70&&marks>=60){
        printf("Grade:D");
    }
    else if(marks<60&&marks>=33){
        printf("Grade:E");
    }
    else if(marks<33&&marks>=0){
        printf("Fail");
    }
    else{
        printf("Invaild marks entered");
    }
    
    

    printf("Ayush singh");

    char str[100];
    char ch;
    int i = 0;
    
    // Initialize ch to a valid value
    ch = '\0';
    
    // Read the input string until newline
    while(ch != '\n') {
        scanf("%c", &ch);
        if (ch != '\n') {
            str[i] = ch;
            i++;
        }
    }
    
    str[i] = '\0';  // Null terminate the string
    puts(str);  // Print the original string

    // Slice the string from position 2 to 8
    slice(str, 2, 8);

    // Count the number of vowels in the original string
    printf("Vowel count is: %d\n", countVowel(str));

    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("Value of a is:%d\n",a);
    printf("Value of b is:%d",b);

    int a;
    scanf("%d",&a);
    int b;
    scanf(%d,&b);
    int sum = a + b;
    int multiplication = a * b;
    printf("Sum is:%d",sum);
    printf("Multiplication is:%d",multiplication);
    

    return 0;
}

void slice(char str[], int n, int m) {
    char newstr[100];
    int j = 0;

    // Ensure the indices are valid
    for(int i = n; i <= m && str[i] != '\0'; i++, j++) {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';  // Null terminate the new string
    puts(newstr);  // Print the sliced string
}

float originalamount,discountedamount,finalamount;
int amount=0;

if(amount<1000){
}
else if(amout>=1000&&amount<=5000){
    discountedamount=(originalamount * 10)/100;
}
else if(amount>5000){
    discountedamount=(originalamount *20)/100;
}

finalamount=originalamount-discountedamount;

printf("Original amount= %d\n",originalamount);
printf("Discounted amount= %d\n",discountedamount);
printf("Final amount= %d\n",finalamount);

int countVowel(char str[]) {
    int count = 0;



    // Iterate through the string and count vowels
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for case insensitivity
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

