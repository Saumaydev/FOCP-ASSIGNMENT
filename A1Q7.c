#include<stdio.h>
#include<math.h>
int binary(int n);
void decimal(int n);
int main(){
    int a,x,y,g,rev=0;
    printf("press 1 for binary to decimal\n");
    printf("press 2 for decimal to binary\n");
    scanf("%d",&a);
    if(a==1){
        printf("Enter the binary no.\n");
        scanf("%d",&x);
        printf("decimal no. is %d",binary(x));
    } else if(a==2){
        printf("Enter the decimal no.\n");
        scanf("%d",&y);
        decimal(y);
       }
}
int binary(int n){
    int r; int g=0;
    for(int i=0;n>0;i++){
        r=n%10;
        if(r==1){
            g=g+pow(2,i);
        }
        n=n/10;
    }
    return g;
}

void decimal(int n){
    printf("decimal no. is ");
    int bin[64],i=0;
    while(n>0){
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){  
        printf("%d",bin[j]);
    }
 
}