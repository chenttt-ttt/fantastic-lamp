#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf("%c ", ch++);
        }
        printf("%c \n", ch++);
    }
    return 0;
}
