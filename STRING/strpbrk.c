#include <stdio.h>
char *_strpbrk(char *p1,char *p2){
    char *momo = NULL;
    while(*p1 != '\0'){
        if(*p2 == *p1){
            momo = p1;
        }
        p1++;
    }
    return momo;
}
int main(){
char carlos[] = "HI hihihihhihihhi  MAN WHO ARE YOU ?";

char *p1 = carlos;
char coco[] = "Y";
char *p2 = coco;

p1 = _strpbrk(carlos,coco);
printf("%s\n",p1);
if(p1 == NULL){
    printf("It is not available!!\n");
}
return 0;

}