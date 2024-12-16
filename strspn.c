#include <stdio.h>
int _strspn(char *co,char *ko){
    int n = 0;
      while (*co != '\0') {  
        int found = 0;
        char *temp = ko;

   while(*temp != '\0'){
    if(*co == *temp){
        found = 1;
        break;
    }
    temp++;
   }
   if (!found) {
    break;
}
n++;
co++;
}
    return n;
}
int main()
{
    char coco[] = "2342356";
    char koko[] = "123432";
    char *co = coco;
    char *ko = koko;
    printf("%d\n",_strspn(coco,koko));
    return 0;
}