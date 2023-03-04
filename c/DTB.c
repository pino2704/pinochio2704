#include <stdio.h>

double DTB(double dkt, double dkt2, double dgk, double dck) {
    return (dkt*0.1 + dkt2*0.2 + dgk*0.2 + dck*0.5);
}

int main() {
    printf("Giai tich: %lf", DTB(10, 8.3, 7.5, 7));
    printf("\nPPLT: %lf", DTB(9.5, 8.3, 10, 8.5));
    printf("\nTCMT: %lf", DTB(9.5, 9.5, 8.7, 5.3));
    return 0;
}