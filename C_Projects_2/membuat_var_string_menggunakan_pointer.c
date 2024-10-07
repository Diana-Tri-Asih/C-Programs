#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *os;
    
    os = (char *) malloc(6 * sizeof(char));
    strcpy(os, "Linux");
    printf("Nilai variabel os: %s\n", os);
    free(os);
    
    os = (char *) malloc(8 * sizeof(char));
    strcpy(os, "Windows");
    printf("Nilai variabel os: %s\n", os);
    free(os);
    
    return 0;
}
