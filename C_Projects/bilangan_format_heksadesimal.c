#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t a = 0x1A;  
    int8_t b = 0x02;  

    printf("0x%X + 0x%X = 0x%X\n", a, b, (a + b));
    printf("0x%X - 0x%X = 0x%X\n", a, b, (a - b));
    printf("0x%X * 0x%X = 0x%X\n", a, b, (a * b));
    printf("0x%X / 0x%X = 0x%X\n", a, b, (a / b));
    printf("0x%X %% 0x%X = 0x%X\n", a, b, (a % b));  

    return 0;
}
