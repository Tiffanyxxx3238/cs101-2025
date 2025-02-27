#include <stdio.h>

int main() {
    char input[] = "10001111"; // 8-bit 二進位字串
    int decimal = 0;

    // 將二進位字串轉換為整數
    for (int i = 0; i < 8; i++) {
        decimal = decimal * 2 + (input[i] - '0');
    }

    // 以 16 進位格式輸出
    printf("%X\n", decimal);

    return 0;
}
