#include<stdio.h>
int main(){
    int num=0;
    //int nnum []="123456789";
     for (int i=1; i<=10;i++){
        if(i %2 != 0  && i %3 != 0 && num %4 != 0 && i %5 != 0 && num %6 != 0 && num %7 != 0 && num %8 != 0 &&  num %9 != 0 ){
          printf("%d",num);
        }
    }
     return 0; 
}