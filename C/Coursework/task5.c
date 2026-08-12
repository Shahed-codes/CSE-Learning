#include <stdio.h>

int main() {
    double sum = 0.0;
    for (int i = 1; i <= 10; i++) {
        sum += (double)i / (i + 1);
    }
    printf("%.6f\n", sum);
    return 0;
}
