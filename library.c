#include <stdio.h>

int main() {
    char *str = "banana";
    printf("Length of string 'banana': %d\n", strlen(str));
}

int strlen(const char *str) {
    int length = 0;
    while (*str != '\0') {
        str++;
        length++;
    }
    return length;
}

