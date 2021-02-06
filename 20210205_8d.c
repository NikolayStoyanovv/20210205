/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include<stdio.h>
#include<string.h>
void reverse(char s[]){
    while(*s!='\0')
        s++;
    for(;*s>=0;s--){
        printf("%c",*s);
    }
    printf("\n");
   
}
int main(void){
    char s[]="Miro\n";
    reverse(s);
    return 0;
}
