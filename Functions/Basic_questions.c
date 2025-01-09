#include <stdio.h>
#include <ctype.h> // For handling case insensitivity

void slice(char str[], int n, int m);
int countVowel(char str[]);

int main() {
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

