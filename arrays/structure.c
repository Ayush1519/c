#include<stdio.h>
#include<string.h>
int strcmp();
int main() {
    char firststr[] = "Apple";
    char secstr[] = "Banana";
    printf("%d\n", strcmp(firststr,secstr));
    printf("%d\n",strcmp(secstr,firststr));
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr,oldstr);
    puts(newstr);
}