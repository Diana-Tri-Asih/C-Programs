#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm now;
    t = time(NULL);
    now = *localtime(&t);

    printf("Tanggal dan waktu saat ini:\n");
    printf("Hari ke-  : %02d\n", now.tm_mday);     
    printf("Bulan     : %02d\n", now.tm_mon + 1);  
    printf("Tahun     : %d\n", now.tm_year + 1900); 
    printf("Jam       : %02d\n", now.tm_hour);      
    printf("Menit     : %02d\n", now.tm_min);       
    printf("Detik     : %02d\n", now.tm_sec);       

    return 0;
}
