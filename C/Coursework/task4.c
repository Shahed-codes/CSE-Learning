#include <stdio.h>

int main() {
    double prod = 1.0;
    for (int i = 1; i <= 100; i++) {
        prod *= i;
    }
    printf("%.2e\n", prod);
    return 0;
}
