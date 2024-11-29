#include<stdio.h>
int coordinate(int x, int y);
int main(){
    int a,b;
   printf("enter the no.",&a,&b);
   scanf("%d %d",&a,&b);
   printf("the coordinate point (%d,%d) lies in the %d quadrant",a,b,coordinate(a,b));
}
int coordinate(int x,int y){
    if(x>0&&y>0){
        return 1;
    }else if(x<0&&y>0){
        return 2;
    }else if(x<0&&y<0){
        return 3;
    }else if(x>0&&y<0){
        return 4;
    }     
} 