#include <stdio.h>

int multi(int i, int j){
    if(j == 1){
        printf("%d*%d=%d\t", i, j, i*j);
        return 0;
    }else{
        multi(i, j-1);
        printf("%d*%d=%d\t",i,j, i*j);
    }
    
    
}

void printTable(int i){
    if(i == 1){
        multi(i,9);
        printf("\n");
    }else{
        printTable(i - 1);
        multi(i, 9);
        printf("\n");
    }
}

int main(){
    printTable(9);
    return 0;
}