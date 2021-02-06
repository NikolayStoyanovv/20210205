/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/
#include<stdio.h>
char *our_strcat(char *array1, char *array2)
{
    char *start = array1;

    while(*array1++)
    {
     *start++;
    }

    while(*start++ = *array2++)
   ;
   
    return start;
}
int main(){
    char array1[255]={'H','e','l','l','o'};
    char array2[16]={'w','o','r','l','d'};
    our_strcat(array1,array2);
    for(int i=0;array1[i]!='\0';i++){
        printf("%c\n",array1[i]);
    }
    return 0;
}