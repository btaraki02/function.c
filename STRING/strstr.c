#include <stdio.h>
char *_strstr(char *p1,char *p2){
    char *somo = NULL;
    if(*p2 == '\0'){
        return p1;
    }
    while(*p1 != '\0'){
    char *test1 = p1;
    char *test2 = p2;
    while(*test1 == *test2 && *test2 !='\0'){
        test1++;
        test2++;
    }


        if(*test2 == '\0'){
            somo = p1;
            break;
        }
        p1++;
    }
    return somo;
}
int main(){
char vim[] = "HI hihihihhihihhi  MAN WHO ARE YOU ?";

char *p1 = vim;
char coco[] = "ARE";
char *p2 = coco;

p1 = _strstr(vim,coco);
printf("%s\n",p1);
if(p1 == NULL){
    printf("It is not available!!\n");
}
return 0;

}