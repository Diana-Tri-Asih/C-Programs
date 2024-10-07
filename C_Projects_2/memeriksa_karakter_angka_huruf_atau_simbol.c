#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i;
    char str[] = "Python 2.7, C11 & C++14, C# 6.0";
    int alnum = 0, alpha = 0, digit = 0, space = 0, punct = 0;

    for (i = 0; i < strlen(str); i++) {
        if (isalnum(str[i])) alnum++;
        if (isalpha(str[i])) alpha++;
        if (isdigit(str[i])) digit++;
        if (isspace(str[i])) space++;
        if (ispunct(str[i])) punct++;
    }

    printf("String: %s\n\n", str);
    printf("Jumlah karakter alfanumerik: %d\n", alnum);
    printf("Jumlah karakter alfabet: %d\n", alpha);
    printf("Jumlah karakter angka: %d\n", digit);
    printf("Jumlah karakter spasi: %d\n", space);
    printf("Jumlah karakter punctuator: %d\n", punct);

    return 0;
}
