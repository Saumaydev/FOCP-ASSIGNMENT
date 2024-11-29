#include<stdio.h>
int main(){
    int n[30],a,c=0;
    printf("how many students");
    scanf("%d",&a);
    printf("enter the marks");
    for(int i=1;i<=a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=1;i<=a;i++){
        if(n[i]==99){
            printf("%d student scored 99 \n",i);
            c++;  
        }
    }
    printf("%d students have scored 99",c); 
}   