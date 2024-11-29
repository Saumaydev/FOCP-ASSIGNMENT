#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(void);
    
int main(){
     srand(time(0));
    int a;
    int g=random();
    printf("ROCK PAPER SCISSOR\n");
    printf("   GAME START\n");
    printf(" ENTER 1 FOR STONE\n ENTER 2 FOR PAPER\n ENTER 3 FOR SCISSOR\n");
    scanf("%d",&a);
    if(a==1){
    printf("STONE");
    }else if(a==2){
    printf("PAPER");
    }else if(a==3){
    printf("SCISSOR");
    }
    printf(" VS ");
    if(g==1){
    printf("STONE\n");
    }else if(g==2){       
    printf("PAPER\n");
    }else if(g==3){
    printf("SCISSOR\n");
    }
    if(a==1 && g==2){
     printf("COMPUTER WIN !!");                                        
    } else if (a==1 && g==3){                                   
     printf(" YOU WIN !!");                                        
    } else if (a==1 && g==1){                                
        printf(" DRAW !!");
    } else if (a==2 && g==2){                                
        printf(" DRAW !!");
    } else if (a==2 && g==1){                                
        printf(" YOU WIN !!");
    } else if (a==2 && g==3){                                
        printf("  COMPUTER WIN !!");
    } else if (a==3 && g==1){                                
        printf(" COMPUTER WIN !!");
    } else if (a==3 && g==2){                                
        printf(" YOU WIN !!");
    } else if (a==3 && g==3){                                
        printf(" DRAW !!");
    }
}   
int random(void){
 int c=((rand()%100)+1);
 if(c<33){
    return 1;
    }else if(33<c && c<66){
    return 2;
    }else if(66<c){
     return 3;
    }      
}