#include <stdio.h>
void ft_strncat(char *str0,char *str1,int n){
    while(*str0 != '\0'){
        str0++;
    }
    while(*str1 != '\0'&& 0 < n){
        *str0 = *str1;
        str0++;
        str1++;
        n--;
    }
    *str0 = '\0';
}


int main(){
char choko[999] = "HI THIS ";
char nano[] = "IS TEST 2879879874090909098";
char *str0 = choko;
char *str1 = nano;
int n = 8;
ft_strncat(choko,nano,n);
printf("%s\n",choko);
return 0;
}