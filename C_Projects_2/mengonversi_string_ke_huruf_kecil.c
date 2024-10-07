#include <stdio.h>
#include <ctype.h>

void lowercase(char *s) {
    while (*s != '\0') {
        *s = (isalpha(*s) && isupper(*s)) ? tolower(*s) : *s;
        s++;
    }
}

int main() {
    char str[] = "PEMROGRAMAN LINUX DENGAN BAHASA C";
    
    printf("Sebelum konversi:\n");
    printf("%s\n\n", str);
    
    lowercase(str);
    
    printf("Setelah konversi:\n");
    printf("%s\n", str);
    
    return 0;
}
