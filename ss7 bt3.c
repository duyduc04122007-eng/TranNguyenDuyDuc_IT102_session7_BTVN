#include <stdio.h>

int main() {
    int number, temp, digit, reverse = 0;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &number);
    temp = number;
    while(temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;          
    }
    if(number == reverse)
        printf("%d la so doi xung.\number", number);
    else
        printf("%d khong phai so doi xung.\number", number);

    return 0;
}
