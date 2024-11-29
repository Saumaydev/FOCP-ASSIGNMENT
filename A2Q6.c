#include<stdio.h>
int main(){
    int n[30],a,g=0;
    printf("how many subjects");
    scanf("%d",&a);
    printf("enter the marks");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    printf("total score - ");
    for(int j=0;j<a;j++){
       g=g+n[j];
    }
    printf("%d",g);
    printf("\n average score - %d",g/a);

}   