#include <stdio.h>

char* ft_strrchr(char *str,char ch){
    while(*str != '\0'){
        if(*str == ch){
            return  str;
        }
        str++;
    }
    return NULL;

}
int main(){
    char kol[] = "hi this is 2 test";
    char *str = kol;
    str = ft_strrchr(kol,'i');
    if(str != NULL){
            printf("Last occurrence of 'i': %s\n",str);
    }
    else{
        printf("Character 'i' not found\n");
    }
    return 0;
}