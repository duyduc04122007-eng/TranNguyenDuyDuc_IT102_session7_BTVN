#include <stdio.h>
#include <math.h>

int main() {
    int number, daoNguoc = 0;
    printf("Nhap so nguyen number: ");
    scanf("%d", &number);

    while(number != 0) {
        daoNguoc = daoNguoc * 10 + number % 10;
        number /= 10;
    }

    printf("So dao nguoc la: %d\number", daoNguoc);
    return 0;
}
