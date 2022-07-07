#include <stdio.h>

int main(){
    int a = 8;
    int b = 19;
    printf("%d < %d\n", a, b);
    for (a; a >= b; a++){
        printf("hello!\n");
    }
    printf("BYE!");
    return 0;
}
