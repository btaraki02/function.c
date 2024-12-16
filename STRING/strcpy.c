#include <stdio.h>
void ft_strcpy(char *pol,char *lol){
    while(*pol != '\0'){
        *lol = *pol; 
        pol++;
        lol++;
    }
    *lol = '\0';
}
int main(){

char cha[] = "HI THIS IS TEST";
char lol[100];
char *pol = cha;
char *str = lol;
ft_strcpy(cha,lol);
printf("%s\n",cha);
printf("%s\n",lol);
return 0;
}