/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/
#include<stdio.h>
#include <string.h>
int our_strcmp(char *s,char *t){
    int max=5;
    int min=-4;
    while(*s++!=*t++){
        if(*s++>*t++){
            return max;
        }else if(*s++<*t++){
            return min;
        }

        }
    
    return 0;
}

int main(){
    char test[6]={'P','e','s','h','o','\0'};
    char test2[strlen(test)];
    int n=our_strcmp(test,test2);
    printf("%d\n",n);
    return 0;
}