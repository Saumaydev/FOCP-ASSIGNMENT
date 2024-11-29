#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a==armstrong(a)){
        printf("%d is armstrong",a);
    }else{
        printf("%d is not armstrong",a);
    }
}
int armstrong(int n){
    int c=0;
    int num=n;
    while(num>0){
        num/=10;
        c++;
    }
    float sum=0;float d;float g;
    while(n>0){
        d=n%10;
        sum=sum+pow(d,c);
        n=n/10;
    } 
    return sum;
}