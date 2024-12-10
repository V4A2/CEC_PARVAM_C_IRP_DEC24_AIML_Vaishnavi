#include<stdio.h>
int main(){

for(int j=1;j<=5;j++){
    for ( int i =1; i <= j ; i++){
        printf("%d ",j);
    }
    printf("\n"); 
}
printf("\n -------------------------- \n\n"); 
for(int j=5;j>=1;j--){
    for ( int i =1; i <= j ; i++){
        printf("%d",i);
    }
    printf("\n"); 
}


 printf("\n -------------------------- \n\n"); 
int n=5;
for(int j=5;j>=1;j--){
    for ( int k =1; k <= j ; k++){
        printf("  ");
    }
    for(int j=1;j<=5;j++) // 1,2,3,4,5
    for ( int i =1; i <= j ; i++){ // 
        printf("* ");
    }
    printf("\n"); 
}
return 0;
}