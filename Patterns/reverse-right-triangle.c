#include <stdio.h>

int main() {
    int i, j, n = 4;

    for(i = n; i >= 0; i--)
    {
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
