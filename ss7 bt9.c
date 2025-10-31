#include <stdio.h>

int main() {
    int n, a, b;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (a = 0; a * a * a <= n; a++) {
        for ( b = 0; b * b * b <= n; b++) {
            if (a * a * a + b * b * b == n) {
                printf("(%d, %d)\n", a, b);
            }
        }
    }

    return 0;
}
