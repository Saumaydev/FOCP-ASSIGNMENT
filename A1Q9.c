#include<stdio.h>
int main(){
    int a;
    printf("enter how long triangle u want");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
       for(int j=1;j<=i;j++){
             printf("%d",(j+1)%2);
       }
        for(int j=2*a-1;j>1;j-- ){
             printf(".");
       }
       for(int k=1;k<=i;k++){
             printf("%d",(k+1)%2);
       }
       printf("\n");
    }

}
 