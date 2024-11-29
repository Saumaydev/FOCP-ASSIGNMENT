#include<stdio.h> 
int hcf(int a, int b);
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a, &b);
    printf("hcf of %d and %d is %d" , a, b, hcf(a,b));
}
int hcf(int a, int b){
    int i;
     int min=(a<b)?a:b;
     for(i=min;i>1;i--){
        if(a%i==0 && b%i==0){
            break;
        }
     }
     return i;
}