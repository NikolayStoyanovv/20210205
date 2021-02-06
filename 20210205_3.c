/*Първата функция strcpy(s, t), която копира низа t в низа s. Щеше да е
чудесно просто да кажем s = t, но по този начин ще копираме указателите, а
не всички символи от единия в другия масив. За да стане това трябва да
обходим целия масив символ по символ и като използваме цикъл и да
присвоим стойността всеки един елемент от единия масив на същата
позиция в другия.*/
#include<stdio.h>
#include <string.h>
void my_strcpy(char *t, char *s){
        while(*s++=*t++)
            ;
}
int main(){
    char test[6]={'P','e','s','h','o','\0'};
    char test2[strlen(test)];
    my_strcpy(test,test2);
    for(int i=0;test2[i]!='\0';i++){//to check the elements in the second array
        printf("%c\n",test2[i]);
    }
    return 0;
}