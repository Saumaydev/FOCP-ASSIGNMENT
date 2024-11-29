#include<stdio.h>
int main(){
    int n[30],a;
    printf("how many students");
    scanf("%d",&a);
    printf("enter the marks");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    printf("updated marks");
    for(int j=0;j<a;j++){
       printf("%d \n",n[j]+5);
    }
}   