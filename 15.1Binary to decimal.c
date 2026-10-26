#include <stdio.h>
int main() {
    int n, temp, remainder;
    int decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        remainder = temp % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        temp = temp / 10;
    }

    printf("Decimal number = %d", decimal);
    return 0;
}