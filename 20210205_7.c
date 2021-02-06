/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/
#include<stdio.h>
#include<string.h>
int strend(char *s, char *t) {
    while (*s++) {  
        if (*t == *s) {
            while ((*s++ == *t++) && (*t != '\0')) ;
            if (*s == '\0' && *t == '\0')
                return 1;
            return 0;
        }
    }
    return 0;
}
int main(){
    char array1[255]={'H','e','l','l','o'};
    char array2[16]={'w','o','r','l','d'};
       if (strend(array1,array2))
        printf("низът array1 се среща в края на  низа array2 \n");
    else
        printf("низът array1 не се среща в края на  низа array2\n");
    return 0;
}