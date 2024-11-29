#include<stdio.h>
int main(){
    printf("enter two integers");
    int a, b;
    scanf("%d %d", &a , &b);
    printf("%d",a+~b+1);
}