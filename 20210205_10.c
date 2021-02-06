/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/
#include<stdio.h>
char *our_strcat(char *array1, char *array2,int n)
{
    char *start = array1;

    while(*array1++)
    {
     *start++;
    }
    while(n--){
    *start++ =*array2++;
   
    }
    return start;
}

int main(){
    char array1[255]={'H','e','l','l','o'};
    char array2[16]={'w','o','r','l','d'};
    our_strcat(array1,array2,2);
    for(int i=0;array1[i]!='\0';i++){
        printf("%c\n",array1[i]);
    }
    return 0;
}