/**/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
float atof(char *s){
    float result;
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
       

return result=(float)n/power;

}


int main(){
    char s[]="123.69";
    float result=atof(s);
    printf("%f\n ",result);
    atof(s);
   return 0;
}