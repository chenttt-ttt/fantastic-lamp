#include <stdio.h>
int is_perfect_number(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int found = 0;
    for (int i = m; i <= n; i++) {
        if (is_perfect_number(i)) {
            found = 1;
            printf("%d = 1", i);
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }
    if (!found) {
        printf("None\n");
    }
    return 0;
}
