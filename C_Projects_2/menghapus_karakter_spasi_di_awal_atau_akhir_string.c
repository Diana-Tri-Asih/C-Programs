#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool iswhitespace(int c) {
    return isspace(c) || c == '\t';
}

// left trim: menghapus karakter spasi/tab yang mengawali string 
char *ltrim(char *s) {
    while (iswhitespace(*s)) s++;
    return s;
}

// Right trim: menghapus karakter spasi/tab yang mengakhiri string 
char *rtrim(char *s) {
    // Pointer p diinisialisasi untuk menunjukan karakter terakhir 
    char *p = s + strlen(s) - 1;
    while (p > s && iswhitespace(*p)) p--;
    *(p + 1) = '\0'; // akhir string //
    return s;
}

// Trim: menghapus spasi/tab di awal dan di akhir string 
char *trim(char *s) {
    s = ltrim(s);
    s = rtrim(s);
    return s;
}

int main() {
    char str1[] = "     Ada 5 spasi di awal string";
    char str2[] = "Ada 5 spasi di akhir string     ";
    char str3[] = "     Ada 5 spasi di awal string dan di akhir string     ";

    printf("Sebelum spasi dibuang: \n");
    printf("str1: %s (jumlah karakter: %ld)\n", str1, strlen(str1));
    printf("str2: %s (jumlah karakter: %ld)\n", str2, strlen(str2));
    printf("str3: %s (jumlah karakter: %ld)\n", str3, strlen(str3));

    strcpy(str1, ltrim(str1));
    strcpy(str2, rtrim(str2));
    strcpy(str3, trim(str3));

    printf("\nSetelah spasi dibuang: \n");
    printf("str1: %s (jumlah karakter: %ld)\n", str1, strlen(str1));
    printf("str2: %s (jumlah karakter: %ld)\n", str2, strlen(str2));
    printf("str3: %s (jumlah karakter: %ld)\n", str3, strlen(str3));

    return 0;
}
