#include <stdio.h>
#include <string.h>

int indexOfChar(char *s, char c) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    char *os = "Linux";
    printf("os: %s\n", os);
    printf("Karakter '%c' pertama ditemukan pada index ke-%d\n", 'L', indexOfChar(os, 'L'));
    printf("Karakter '%c' pertama ditemukan pada index ke-%d\n", 'u', indexOfChar(os, 'u'));
    return 0;
}
