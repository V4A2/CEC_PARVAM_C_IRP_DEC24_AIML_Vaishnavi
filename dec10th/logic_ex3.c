#include<stdio.h>
int main(){
    char name[50];
    int count =0;
    printf("enter your name :");
    scanf("%s",&name);
    for(int i=0; name[i] !='\0';i++)
    count++;
    if(count%2==0){
        for(int c=0; c<count;c++){
        if(c%2 == 0){
            name[c]='1';
        }
    }
    }else{
        for(int c=0; c<count;c++){
        if(c%2 != 0){
            name[c]='0';
            }
        }
    }
    printf("the result =%s",name);
    
    return 0;
    
}