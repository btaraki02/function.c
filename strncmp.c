#include <stdio.h>
 int ft_strncmp(char *mama ,char *baba,int p){
    while(*mama && *baba && 0 < p){
        if(*mama != *baba)
            return *mama - *baba;
        mama++;
        baba++;
        p--;
    }
    if(p == 0)
        return 0;
    else
        return *mama - *baba;
 }
 int main(){
    char mom[] = "hi how are you to day;}";
    char dad[] = "hi how are you to day;}3097582798289";
    char *mama= mom;
    char *baba= dad;
    int p = 24;
    int n = ft_strncmp(mom,dad,p);
    
if(n == 0 ){
    printf("yes\n");
}
else{
    printf("no\n");
}
return 0;
 }