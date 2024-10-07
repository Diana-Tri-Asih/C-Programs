#include <stdio.h>
#include <math.h>

int main() {
    double val = 123.416128;
    printf("val             : %.6lf\n", val); //nilai desimal ori
    printf("round (val)     : %.0lf\n", round(val));
    printf("ceil (val)      : %.0lf\n", ceil(val));
    printf("floor (val)     : %.0lf\n", floor(val));
    return 0;
}
