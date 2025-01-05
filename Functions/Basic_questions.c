#include<stdio.h>
void slice(char str1[], int n, int m);
int countVowel(char str[]);
int main() {
    char str[100];
    char ch;
    int i=0;
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    char str[] = "HappyJourney";
    slice(str,2,8);
    printf("Vowel is: %d",countVowel(str));
}
void slice(char str[], int n, int m) {
    char newstr[100];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}

int countVowel(char str[]) {
    int count = 0;

    for(int i=0;str[i] != '\0';i++){
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            count++;
        }
    }
    return count;
}    
