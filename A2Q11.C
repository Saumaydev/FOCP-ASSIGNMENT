#include<stdio.h>
int main(){
    int n[34],a,b,c;
    printf("how much element u want to enter");
    scanf("%d",&a);
    printf("Enter elements");
    for(int i=0;i<a;i++){
      scanf("%d",&n[i]);
    }
    printf("enter where you want to insert value");
    scanf("%d",&b);
    printf("enter the value u want to insert");
    scanf("%d",&c);
    printf("Original Array: ");
    for(int i=0;i<a;i++){
        printf("%d\n",n[i]);
    }
    for(int i=a;i>=b;i--){
        n[i]=n[i-1];
    }
    n[b-1]=c;
    printf("Updated Array: ");
    for(int i=0;i<a+1;i++){
        printf("%d\n",n[i]);
    }
}
