#include<stdio.h>
#include<string.h>
int strcmp();
int countLength(char arr[]);
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1;
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
    
    char name[] = "Ayush";
    int length = strlen(name);
    printf("Length is: %d",length);
    return 0;
}
