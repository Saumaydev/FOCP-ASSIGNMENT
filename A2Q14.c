#include<stdio.h>
int main(){
    int n[34],a,b,c=0;
    printf("how much element u want to enter");
    scanf("%d",&a);
    printf("Enter elements");
    for(int i=0;i<a;i++){
      scanf("%d",&n[i]);
    }
    printf("Duplicate Elements are: ");
    for(int i=0;i<a;i++){
       for(int j=i+1;j<a;j++){
         if(n[i]==n[j]){
          c++;
         }
         }
         if(c>1){
            printf("%d\n",n[i]);
       }
        c=0; 
    }
}
