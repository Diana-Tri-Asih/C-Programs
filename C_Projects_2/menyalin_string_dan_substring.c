#include <stdio.h>
#include <string.h>

int main() {
    char os1[6] = "Linux";
    char os2[6];
    strcpy(os2, os1);
    
    printf("os1: %s\n", os1);
    printf("os2: %s\n", os2);
    printf("Jumlah karakter dalam os1: %d\n", strlen(os1));
    printf("Jumlah karakter dalam os2: %d\n", strlen(os2));
    
    return 0;
}
