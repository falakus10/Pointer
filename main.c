#include <stdio.h>

int main() {
    int *ptam ,tam= 2;
    ptam = &tam;
    printf("icerik : %d\n", tam);
    printf("adres : %p\n", &tam);
    printf("adres : %p\n", ptam);
    return 0;
}
