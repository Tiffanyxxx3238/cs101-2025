#include <stdio.h>

int main() {
    char input[] = "AABBBCCCCddd";
    char current = input[0];
    int count = 1;

    for (int i = 1; input[i] != '\0'; i++) {
        if (input[i] == current) {
            count++;
            if (count == 9) { // 限制最多9個相同字元
                printf("%c%d", current, count);
                count = 0;
            }
        } else {
            if (count > 0) {
                printf("%c%d", current, count);
            }
            current = input[i];
            count = 1;
        }
    }
    if (count > 0) {
        printf("%c%d", current, count);
    }
    printf("\n");

    return 0;
}
