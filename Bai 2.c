#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("ENTER NUMBER:\n");

    // Nhập vào 10 số nguyên
    for (i = 0; i < 10; i++) {
        printf("NUMBER %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("DISPLAYIN REVERSE ORDER :\n");

    // Hiển thị các số theo thứ tự ngược
    for (i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
