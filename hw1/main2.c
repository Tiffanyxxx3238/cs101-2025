#include <stdio.h>

int main() {
    char input[] = "A4B1C3f3"; // 壓縮後的字串

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i]; // 當前的字母
        i++; // 移動到數字部分
        int count = input[i] - '0'; // 轉換為整數

        // 印出 count 次 ch
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
    }
    printf("\n");

    return 0;
}
