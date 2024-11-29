#include<stdio.h>
int main(){
    int n[34],a,b,c;
    printf("how much element u want to enter");
    scanf("%d",&a);
    printf("Enter elements");
    for(int i=0;i<a;i++){
      scanf("%d",&n[i]);
    }
    printf("enter which position value to delete");
    scanf("%d",&b);
    printf("Original Array: ");
    for(int i=0;i<a;i++){
        printf("%d\n",n[i]);
    }
    for(int i=b;i<a;i++){
        n[i-1]=n[i];
    }
    printf("Updated Array: ");
    for(int i=0;i<a-1;i++){
        printf("%d\n",n[i]);
    }
}
