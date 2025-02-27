#include <stdio.h>

int main() {
    char a[] = "Hello";  // 原始字串
    int len = 0;         // 計算字串長度
    while (a[len] != '\0') {
        len++;
    }
    len--; // 排除字串結尾的 '\0'

    // 進行前後交換
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i];
        a[len - i] = temp;
    }

    // 輸出反轉後的字串
    printf("%s\n", a);
    return 0;
}
