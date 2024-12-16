#include <stdio.h>
#define momo() printf("hi bilal\n");
int main(){
     printf("Error in the line n %d of the file %s\n", __LINE__, __FILE__);
 printf("This file has been compiled on %s at %s\n", __DATE__, __TIME__);
 momo()
}