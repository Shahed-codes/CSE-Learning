#include <stdio.h>

int main() {
    int n;
    int d = 1;
    int a = 1;
    
    printf("Enter n:\n");
    if (scanf("%d", &n) != 1) return 1; // Validate input
    
    // Part 1: Top Pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            if (d == 10) {
                d = 0;
            }
            printf("%d ", d);
            d++;
        }
        printf("\n");
    }
    
    
    for (int i = n-1; i>=1; i--) {
        for (int j = 1; j <= n-i; j++) { 
            printf(" ");
        }
        for (int k = 1; k <= i; k++) { 
            if (d == 10) {
                d = 0;}
            printf("%d ", d);
            d++;
        }
        printf("\n");
    }
    
    return 0;
}
