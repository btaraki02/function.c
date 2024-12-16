#include <stdio.h>
void ft_strncpy(char *pol,char *lol,int n){
    while(*pol != '\0' && 0 < n){
        *lol = *pol; 
        pol++;
        lol++;
        n--;
    }
    *lol = '\0';
}
int main(){

char cha[] = "HI THIS IS TEST";
char lol[100];
char *pol = cha;
char *str = lol;
int n = 9;
ft_strncpy(cha,lol,n);
printf("%s\n",cha);
printf("%s\n",lol);
return 0;
}