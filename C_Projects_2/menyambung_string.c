#include <stdio.h>
#include <string.h>

int main() {
    char os1[] = "Linux";
    char os2[13] = " dan Windows";
    
    printf("Sebelum disambung:\n");
    printf("os1: %s\n", os1);
    printf("os2: %s\n\n", os2);
    
    // Menyambung os2 ke os1 
    strcat(os1, os2);
    
    printf("Setelah disambung:\n");
    printf("os1: %s\n", os1);
    
    return 0;
}
