#include<stdio.h>
int main(){
    int num, sum=0,rem=0;
    printf("Enter the number to get sum of digits:");
    scanf("%d",&num);
 
 while(num > 0){
    rem =num%10;
    sum =sum + rem;
    num = num/10;
 }
 printf("the sum of digits=%d",sum);
 return 0;
}