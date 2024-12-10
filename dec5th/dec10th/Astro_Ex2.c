#include<stdio.h>
int main(){
   char alphaUpr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char alphaLow[]="abcdefghijklmnopqrstuvwxyz";
   char name[100];
   int sum=0,astroChoice=0,sod;
   printf("Please Enter your name : \n");
   scanf("%s",&name);
  
    for(int c=0;name[c] != '\0';c++){
           for(int i=0;i<26;i++)
                 if(name[c] == alphaUpr[i] || name[c] == alphaLow[i] ){
                      printf(" %c + ",name[c]);
                    sum += i+1; //sum = sum + i+1

                 }
    }
    printf(" = %d \n",sum);
    astroChoice = sum;
    while(astroChoice > 9){
        sod = 0;
        while(astroChoice > 0){
        sod += astroChoice%10;
        astroChoice/=10;
        }
     astroChoice = sod;
    }
        printf("Astro choice value = %d\n",astroChoice);
   (astroChoice%2 == 0) ? printf("your name has even characters ") : printf("your name has  Odd characters");
    
    return 0;
}
char name [50];
int count ;
printf("enter your name;");
scanf("%s",&name);
 
 for(int i=0; name[i] ! ='\0'i++)
    count++;
if(count%2==0)
printf("your name has even characters")
else 
printf("your name has even characters")

return 0;
