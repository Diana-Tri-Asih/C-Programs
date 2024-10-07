#include <stdio.h>
#include <stdbool.h>

bool istab(int c) {
    return c == '\t';
}

// Ganti karakter tab dengan spasi 
void replacetab(char *s) {
    while (*s != '\0') {
        if (istab(*s)) {
            *s = ' '; // Spasi 
        }
        s++;
    }
}

void printwithnotab(char *s) {
    while (*s != '\0') {
        if (istab(*s)) {
            printf("\\t");
        } else {
            printf("%c", *s);
        }
        s++;
    }
}

int main() {
    char str[] = "C\tC++\tPython\tPerl\tRuby\tPHP";
    
    printf("Sebelum diganti: ");
    printwithnotab(str);
    
    replacetab(str);
    
    printf("\nSetelah diganti: %s\n", str);
    
    return 0;
}
