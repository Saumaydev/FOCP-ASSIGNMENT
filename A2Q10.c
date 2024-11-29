#include<stdio.h>
int main(){
    int n[34],a;
    printf("how much element u want to enter");
    scanf("%d",&a);
    printf("Enter elements");
    for(int i=0;i<a;i++){
      scanf("%d",&n[i]);
    }
    int c=0,g,b,d=0;
    for(int i=0;i<a;i++){
      b=n[i];
     while(n[i]>0){
        g=b%n[i];
        if(g==0){
        c++;}
        n[i]--;
     }
     if(c==2){
      printf("%d is prime no. \n",b);
       d++;
     }
     c=0;
 }
printf("total no. of prime no. are %d",d);
} 
