#include <stdio.h>
 char* ft_strstr(char *str, char number){
    while(*str != '\0'){
       if(*str == number){
        return str;
       }
        
        str++;
    }
    return NULL;
 }
int main(){
    char array[100] = "hi i am bilal taraki and i am a student";
    char *str = NULL;
    str = ft_strstr(array,'l');
    if(str != NULL){
        printf("YES\n");
    }
    else{
        printf("no\n");
    }
    return 0;

}