#include <stdio.h>
#include <string.h>

char charAt(char *s, int i) {
    if (i > -1 && i < strlen(s)) {
        return s[i];
    }
    return -1; 
}

int main() {
    char os[6] = "Linux";
    int index = 3; // Indeks yang akan digunakan untuk pencarian 
    char c = charAt(os, index);

    printf("os: %s\n", os);
    printf("Karakter pada indeks ke-%d adalah: '%c'\n", index, c);
    return 0;
}
