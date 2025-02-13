#include <stdio.h>

int main() {
    int num, msb;
    int bits = sizeof(int) * 8; // Total bits in an integer

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the Most Significant Bit (MSB)
    msb = (num >> (bits - 1)) & 1;

    // Check if MSB is set
    if (msb == 1)
        printf("MSB of %d is set (1).\n", num);
    else
        printf("MSB of %d is not set (0).\n", num);

    return 0;
}
