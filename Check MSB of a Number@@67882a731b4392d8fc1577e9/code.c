#include <stdio.h>

int main() {
    int num, msb;
    int bits = sizeof(int) * 8; // Total bits in an integer

    // Input the number
    scanf("%d", &num);

    // Calculate the Most Significant Bit (MSB)
    msb = (num >> (bits - 1)) & 1;

    // Check if MSB is set
    if (msb == 1)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
