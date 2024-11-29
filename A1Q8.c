#include<stdio.h>
int main(){
    int a;
    printf("enter how long triangle u want");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
       for(int j=1;j<=i;j++){
             printf("%d",j%2);
       }
       printf("\n");
    }

}