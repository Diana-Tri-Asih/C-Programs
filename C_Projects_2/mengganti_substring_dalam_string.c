#include <stdio.h>
#include <string.h>

void substr(char *s, char *oldPattern, char *newPattern) {
    char buffer[1024];
    char *p;
    while (p = strstr(s, oldPattern)) {
        strncpy(buffer, s, p - s);
        buffer[p - s] = '\0';
        sprintf(buffer + (p - s), "%s%s", newPattern, p + strlen(oldPattern));
        s[0] = '\0';
        strcpy(s, buffer);
    }
}

int main() {
    char str[] = "C Ruby C== Ruby Java Ruby";
    printf("Sebelum diganti: %s\n", str);
    substr(str, "Ruby", "Python");
    printf("Setelah diganti: str", str);  
    return 0;
}
