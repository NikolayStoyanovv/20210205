/*Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/
#include<stdio.h>
int size_tmy_strlen(char *s){
    int n=0;
    for(int c=0;s[c]!='\0';c++){
        n++;
    }
   
    return n;
}
int main(){
    int n=0;
    char pesho[]={'P','e','s','h','o'};
    n=size_tmy_strlen(pesho);
    printf("%d\n",n);
    return 0;
}
