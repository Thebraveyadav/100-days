#include <stdio.h>

int main() {
    int num, digit, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;

        if (digit == 0) {
            digit = 1;
        }
        else {
            digit = 0;
        }

        result = result + digit * place;
        place = place * 10;

        num = num / 10;
    }

    printf("1's complement = %d", result);

    return 0;
}
