#include <stdio.h>
#include <ctype.h>
#include <string.h>

void strreverse(char *s) {
    char buffer[strlen(s) + 1];
    int i, j = 0;
    
    for (i = strlen(s) - 1; i >= 0; i--) {
        buffer[j++] = s[i];
    }
    
    buffer[j+1] = '\0';  
    strcpy(s, buffer);
}

int main() {
    char str[] = "AKITAMROFNI";
    
    printf("Sebelum dibalik: %s\n", str);
    
    // Membalik urutan karakter di dalam str 
    strreverse(str);
    
    printf("Setelah dibalik: %s\n", str);
    
    return 0;
}
