#include<stdio.h>
int main(){
    int n , result;

    printf("Enter the number:");
    scanf("%d",&n);
     if (n>100 && n>500)
    result = n * 5; 
    else if (n>500)
    result = n / 2;
    else if (n<100)
    result = n % 100;
    else 
    printf("invalid number ");
    result=result*result;
    printf("%d",result);

return 0;
}
