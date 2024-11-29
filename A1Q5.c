#include<stdio.h>
int perfect(int n);
int main(){
    int a;
     printf("enter the no.");
     scanf("%d",&a);
     if(a==perfect(a)){
        printf("no. is perfect");
     }else{
        printf("no. is not perfect");
     }
}
int perfect(int n){
    int g=0;
     for(int i=1;i<n;i++){
        if(n%i==0){
          g=g+i;  
        }
     }
     return g;
}