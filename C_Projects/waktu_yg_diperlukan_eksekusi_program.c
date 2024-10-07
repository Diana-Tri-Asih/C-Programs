#include <stdio.h>
#include <time.h>
#include <limits.h>

int main() {
    time_t starttime, endtime;
    struct tm starttm, endtm;
    double seconds;
    starttime = time (NULL);
    starttm = *localtime (&starttime);
    
    // Awal proses 
    unsigned int i;
    for (i = 0; i < 400000000; i++) {
        ; // simulasi
    }
    // Akhir proses 

    // Stop 
    endtime = clock();
    endtm = *localtime (&endtime);
    
    seconds = (double)(endtime - starttime) / CLOCKS_PER_SEC;

    printf("Waktu eksekusi: %.4lf detik\n", seconds);
    return 0;
}
