#include <stdio.h>

int main(void) {
    int n;
    printf("dimmi un numero:");
    scanf("%d", &n);

    if (n >= -5 && n <= 10) {
        printf("il numero e dentro l'intervallo");
    } else {
        printf("il numero e fuori dall'intervallo");
    }

    return 0;
}