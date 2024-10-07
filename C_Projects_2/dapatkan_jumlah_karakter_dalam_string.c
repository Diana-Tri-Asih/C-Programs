#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *os1 = "Linux\0";
    char *os2 = "Windows\0";

    printf("os1: %s\n", os1);
    printf("os2: %s\n", os2);
    printf("Jumlah karakter dalam os1: %ld\n", strlen(os1));
    printf("Jumlah karakter dalam os2: %ld\n", strlen(os2));

    return 0;
}
