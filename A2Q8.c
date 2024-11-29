#include<stdio.h>
int main(){
    int n[30],a,g=0;
    printf("how many subjects");
    scanf("%d",&a);
    printf("enter the marks");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    int max=n[0];
    int min=n[0];
   for(int i=0;i<a;i++){
     if(n[i]>max){
        max=n[i];
     }  
    }
    for(int i=0;i<a;i++){
     if(n[i]<min){
        min=n[i];
     }
    }
   printf("max. score is = %d\n",max);
   printf("min. score is = %d\n",min);
   }
   

