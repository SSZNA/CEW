#include <stdio.h>
void decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        return;
    }
    decimalToBinary(decimalNumber / 2);
    printf("%d", decimalNumber % 2);
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary equivalent: ");
    decimalToBinary(decimalNumber);
    printf("\n");

    return 0;
}
