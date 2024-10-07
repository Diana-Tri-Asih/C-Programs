#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool iswhitespace(int c) {
    return isspace(c) || c == '\t' || c == '\n';
}

int wordcounter(char *s) {
    int counter = 0;
    while (*s != '\0') {
        if (iswhitespace(*s)) {
            counter++;
        }
        s++;
    }
    return counter + 1;
}

int main() {
    char str[] = "string\tini adalah contoh string\nyang memiliki banyak kata";
    printf("%s\n\n", str);
    printf("Jumlah kata: %d\n", wordcounter(str));
    return 0;
}
