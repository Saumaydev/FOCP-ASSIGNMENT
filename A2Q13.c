#include<stdio.h>
int main(){
    int n[34],a,b;
    printf("how much element u want to enter");
    scanf("%d",&a);
    printf("Enter elements");
    for(int i=0;i<a;i++){
      scanf("%d",&n[i]);
    }
    b=n[a-1];
    printf("Original Array: ");
    for(int i=0;i<a;i++){
        printf("%d\n",n[i]);
    }
    for(int i=a-1;i>=0;i--){
        n[i]=n[i-1];
    }
    n[0]=b;
    printf("Cyclically Updated Array: ");
    for(int i=0;i<a;i++){
        printf("%d\n",n[i]);
    }
}
