/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/
#include<stdio.h>
#include <string.h>
void my_strcpy(char *t, char *s,int n){
        while(n--)
            *s++=*t++;
}
int main(){
    char test[6]={'P','e','s','h','o','\0'};
    char test2[strlen(test)];
    my_strcpy(test,test2,3);
    for(int i=0;test2[i]!='\0';i++){//to check the elements in the second array
        printf("%c\n",test2[i]);
    }
    return 0;
}