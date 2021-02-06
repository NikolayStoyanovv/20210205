/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.﻿*/
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