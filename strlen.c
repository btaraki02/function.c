#include <stdio.h>
int strlen( char *str){
    int n = 0;
    while(*str != '\0'){
        str++;
        n++;
    }
    return n;
}

int main(){
    char jok[] = "i will be great";
    char *str = jok;

        printf("%s\n",jok);
    printf("%d\n",strlen(jok));
    return 0 ;
}