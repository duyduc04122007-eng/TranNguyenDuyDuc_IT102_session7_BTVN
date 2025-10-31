#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, so_hang = 0, chu_so = 0;
    int tong = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        so_hang++;
        temp /= 10;
    }

    temp = n; 
    while (temp != 0) {
        chu_so = temp % 10;
        tong = tong + pow(chu_so, so_hang);
        temp /= 10;
    }

    if (tong == n){
        printf("%d la so Armstrong.\n", n);
    }else{
        printf("%d khong phai so Armstrong.\n", n);
    }

    return 0;
}
