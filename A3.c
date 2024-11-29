#include<stdio.h>
#include<math.h>
    int addition(int a,int b);
    int subtraction(int a,int b);
    int division(int a,int b);
    int multiplication(int a,int b);
    int logartmic(int a);
    int square(int a);
int main(){
    int a,b,c;
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Division\n");
    printf("Press 4 for Multiplication\n");
    printf("Press 5 for Logartmic Values\n");
    printf("Press 6 for Square Roots\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Enter values\n");
        scanf("%d",&b);
        printf("+\n");
        scanf("%d",&c);
        printf("=\n");
        printf("%d",addition(b,c));
        break;
         case 2:
        printf("Enter values\n");
        scanf("%d",&b);
        printf("-\n");
        scanf("%d",&c);
        printf("=\n");
        printf("%d",subtraction(b,c));
        break;
         case 3:
        printf("Enter values\n");
        scanf("%d",&b);
        printf("/\n");
        scanf("%d",&c);
        printf("=\n");
        printf("%d",division(b,c));
        break;
         case 4:
        printf("Enter values\n");
        scanf("%d",&b);
        printf("*\n");
        scanf("%d",&c);
        printf("=\n");
        printf("%d",multiplication(b,c));
        break;
         case 5:
        printf("Enter value\n");
        scanf("%d",&b);
        printf("log(%d) ",b);
        printf("= ");
        printf("%d",logartmic(b));
        break;
         case 6:
        printf("Enter value\n");
        scanf("%d",&b);
        printf("Square root ");
        printf("= ");
        printf("%d",square(b));
        break;
      }
    }
    int addition(int a,int b){
      return(a+b);
    }
    int subtraction(int a,int b){
        return(a-b);
    }
    int division(int a,int b){
       return(a/b); 
    }
    int multiplication(int a,int b){
        return(a*b);
    }
    int logartmic(int a){
        return(log(a));
    }
    int square(int a){
         return(sqrt(a));
    }
