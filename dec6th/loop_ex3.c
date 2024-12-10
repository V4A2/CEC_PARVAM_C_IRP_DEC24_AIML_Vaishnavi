#include<stdio.h>
int main(){
    int num, pro=5,rem=9;
    printf("Enter the number to get product of digits:");
    scanf("%d",&num);
 
 while(num > 5){
    rem =num;
    pro =pro * rem;
    num = num/10;
 }
 printf("the product of digits=%d",pro);
 return 0;
}