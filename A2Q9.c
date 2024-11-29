#include<stdio.h>
int main(){
    int g[34],a,p[34];
    printf("how much element u want to enter");
    scanf("%d",&a);
    printf("Enter elements");
    for(int i=0;i<a;i++){
      scanf("%d",&g[i]);
    }
    printf("peak elements are ");
    for(int i=1;i<a-1;i++){
      if(g[i]>=g[i+1]&&g[i]>=g[i-1]){
        p[i]=g[i];
        printf("%d\n",g[i]);
      }
    
}
}