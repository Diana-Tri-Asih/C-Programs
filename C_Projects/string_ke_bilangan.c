#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hasil konversi atoi (): %d\n", atoi("12345")); // String ke integer
    printf("Hasil konversi atol (): %ld\n", atol("2147483647")); // String ke long
    printf("Hasil konversi atoll (): %lld\n", atoll("9223372036854775807")); // String ke long long
    printf("Hasil konversi atof (): %lf\n", atof("12345.6789")); // String ke float
    return 0;
}
