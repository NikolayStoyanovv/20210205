#include<stdio.h>
#include<string.h>
void reverse(char s[]){
    while(*s!='\0')
        *s++;
    for(;*s>=0;s--){
        printf("%c",*s);
    }
    printf("\n");
   
}
char* itoa(int num, char *str) 
{ 
     
    int isNegative = 0; 
  
   
    if (num == 0) 
    { 
        *str++ ='0'; 
        *str = '\0'; 
        return str; 
    } 
  
    if (num < 0) 
    { 
        isNegative = 1; 
        num = -num; 
    } 
  
    
    while (num != 0) 
    { 
        int rem = num % 10; 
        *str++ = (rem > 9)? (rem-10) + 'a' : rem + '0'; 
        num = num/10; 
    } 
  
    // If number is negative, append '-' 
    if (isNegative) 
        *str++ = '-'; 
  
    *str = '\0'; // Append string terminator 
  
    // Reverse the string 
    reverse(str); 
  
    return str; 
} 
  

int main() 
{ 
    char str[100]; 
    printf("%s ",itoa(1567, str)); 
       
    return 0; 
}