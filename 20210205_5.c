/*Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка.*/
#include<stdio.h>
char *our_strcat(char *array1, char *array2)
{
    char *start = array1;

    while(*array1 != '\0')
    {
        array1++;
    }

    while(*array2 != '\0')
    {
        *array1 = *array2;
        array1++;
        array2++;
    }

    *array1 = '\0';
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