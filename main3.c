#include <stdio.h>
int main(){
    unsigned char i =200;
    unsigned char j = 220;
    unsigned char k = 0;
    k = (i+j);
    k /=2;
    printf("%d + %d = %d\n", i, j, k);
    return 0;
}