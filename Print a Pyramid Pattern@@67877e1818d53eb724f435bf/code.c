// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-1;j++)
//         printf(" ");

//         for(int k=1;k<=(2*i-1);k++)
//         printf("*");
//             printf("\n");

//     }
//     return 0;
// }



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) { // Loop from 1 to n
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars with spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
