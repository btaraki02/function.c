#include <stdio.h>
void ft_strcat(char *str0,char *str1){
    while(*str0 != '\0'){
        str0++;
    }
    while(*str1 != '\0'){
        *str0 = *str1;
        str0++;
        str1++;
    }
    *str0 = '\0';
}


int main(){
char choko[999] = "HI THIS ";
char nano[] = "IS TEST";
char *str0 = choko;
char *str1 = nano;
ft_strcat(choko,nano);
printf("%s\n",choko);
return 0;
}