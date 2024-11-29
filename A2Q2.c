#include<stdio.h>
int main(){
    int n[30],a;
    printf("how many students");
    scanf("%d",&a);
    printf("enter the marks");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
  if(n[i]>=75){
    printf("%d - A Grade\n",n[i]);
  }else if(74>=n[i]>=60){
    printf("%d - B Grade\n",n[i]);
  }else if(59>=n[i]>=40){
    printf("%d - C Grade\n",n[i]);
  }else if(40<n[i]){
    printf("%d - D Grade\n",n[i]);
  }
} 
}  
    