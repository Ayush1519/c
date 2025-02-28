#include<stdio.h>
#include<string.h>

struct student{
    int roll;//roll no declared
    float cgpa;
    char name[100];
};

int main() {
    struct student s1= {21,9.4, "Ayush"};//struct declared
    printf("student roll=%d\n",s1.roll);

    struct student *ptr=&s1;
    printf("student roll=%d\n",(*ptr).roll);


    int size = 0;
    scanf("%d", &size);

    if (sizeof(int) == 4) {
        size = 4;
    } 
    else if (sizeof(float) == 4) {
        size = 4;
    }
    else if (sizeof(double) == 8) {
        size = 8;
    }
    else if (sizeof(char) == 1) {
        size = 1;
    }

    printf(" %d\n", size);

    float originalamount,discountamount,finalamount;
    scanf("%f",&originalamount);
    
    discountamount=0.00;
    
    if(originalamount<=1000){
    }
    else if(originalamount>1000&&originalamount<=5000){
        discountamount=(originalamount * 10)/100;
    }
    else if(originalamount>5000){
        discountamount=(originalamount * 20)/100;
    }
    
    finalamount=originalamount-discountamount;
    
    printf("Original Amount: %.2f\n",originalamount);
    printf("Discount: %.2f\n",discountamount);
    printf("Final Amount: %.2f\n",finalamount);

    int P=0,T=0,Simple_Intersest=0;
    float R=0;
    scanf("%d%f%d",&P,&R,&T);
    Simple_Intersest=(P*R*T)/100;
    printf("%d",Simple_Intersest);

    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Sum of a+b is:%d",a+b);

    int arr[] = {5,4,9,7,8};

    printf("Element is:%d",arr[2]);
    printf("Element is:%d",arr[0]);

    int marks;
    scanf("%d",&marks);

    if(marks>=90){
        printf("Grade is:%d",A+);
    }
    else{
        printf("Grade us"%d,A),
    }

    int age;
    scanf("%d",&age);

    printf("Age is:%d",age);

    return 0;

    int x;
    scanf("%d\n",&x);
    int y;
    scanf("%d\n",&y); 
    int multiplication=x*y;
    int division=x/y;

    printf("Multiplcation of x with y gives:%d\n",multiplication);
    printf("division of x with y gives:%d\n",division);
}
int n;
scanf("%d", &n);
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("%d ", j+1);
    }
    printf("\n");
}

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("%c ", j+'A');
    }
    printf("\n");
}

for(int i=n;i>=0;i--){
    for(int j=0;j>=i;j--){
        printf("* ");
    }
    printf("\n");
}

for(int i=n;i>=0;i--){
    for(int j=0;j>=i;j--){
        printf("%d ", j-1);
    }
    printf("\n");
}

for(int i=0;i<n;i++){
    for(int j=0;j<2*i;j++){
        printf(" ");
    }
    for(int k=0; k<2*(n-i)-1;k++){
    printf("%d ", k+1);
    }
    printf("\n");
}
for(int i=0;i<n;i++){
    for(int j=0;j<2*i;j++){
        printf(" ");
    }
    for(int k=0; k<2*(n-i)-1; k++){
        printf("* ");
    }
    printf("\n");
}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++){
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++){
            printf("%c ", k + 'A');
        }
        printf("\n");
    }
#include <stdio.h>
    
void swap(int var1, int var2)
{
  int temp = var1;
  var1 = var2;
  var2 = temp;
}
    int main(){
      int var1 = 3, var2 = 2;
  printf("Before swap Value of var1 and var2 is: %d, %d\n",
          var1, var2);
  swap(var1, var2);
  printf("After swap Value of var1 and var2 is: %d, %d",
          var1, var2);
          return 0;
    }
#include <stdio.h>

void swap(int *var1, int *var2)
{
  int temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

// Driver code
int main()
{
  int var1 = 3, var2 = 2;
  printf("Before swap Value of var1 and var2 is: %d, %d\n",
          var1, var2);
  swap(&var1, &var2);
  printf("After swap Value of var1 and var2 is: %d, %d",
          var1, var2);
  return 0;
}