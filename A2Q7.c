#include<stdio.h>
int main(){
    int n[30],a,g=0;
    printf("how many subjects");
    scanf("%d",&a);
    printf("enter the marks");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
    if(n[i]%2==0){
        printf("%d score is even \n",n[i]);
    }
    else {
        printf("%d score is odd\n",n[i]);
    }
}   
}