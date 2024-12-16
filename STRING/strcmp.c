#include <stdio.h>
int ft_strcmp(char *pol , char *lol){
    while(*pol && *lol){
        if(*pol != *lol){
            return *pol - *lol;
        }
        pol++;
        lol++;
    }
    return *pol - *lol;
}



int main(){
    char cha[] = "HI THIS IS TEST";
char lol[] = "HI THIS IS TEST";
char *pol = cha;
char *str = lol;

printf("%s\n",cha);
printf("%s\n",lol);
int  n = ft_strcmp(cha,lol);
if(n == 0){
    printf("yes\n");
}
else{
    printf("no\n");
}
return 0;
}