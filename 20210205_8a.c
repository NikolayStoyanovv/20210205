/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
float atoi(char *s){
    int result;
    int power=1;
    int n;
    int i;
    n = 0;
    
         for(; (*s >= '0' && *s <= '9')||*s=='.'; s++){
             if(*s!='.'){
            n = 10 * n + (*s - '0');
             }else{
                 for(;(*s+1 >= '0' && *s+1 <= '9'); s++){
                 power*=10;
                 }
             }
        }
       

return result=n/power;

}


int main(){
    char s[]="123.69";
    int result=atoi(s);
    printf("%d\n ",result);
    atoi(s);
   return 0;
}
