#include <stdio.h>
int main(){
    label:
    printf("we are inside the lable\n");
    goto end;
    printf("Hello world\n");
    goto label; 
    end:
    printf("we are at end");
    return 0;

}
