#include <stdio.h>
char *strnlen( char *str,int l){
    while(*str != '\0'&& 0  < l){
        str++;
        l--;
    }
    *str = '\0';
return str;
}
int main(){
    char jok[] = "i will be great";
    char *str = jok;
    int l;
    printf("enter your number please :");
   scanf("%d",&l);
   strnlen(jok,l);
        printf("%s",jok);
    return 0 ;
    }