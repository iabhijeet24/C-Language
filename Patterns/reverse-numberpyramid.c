#include <stdio.h>

int main() {
    int i, j;

    for(i=0; i<3; i++) 
    {
        for(j = 3-i; j >= 1; j--) {
            printf(" %d ",j);
        }
        printf("\n");
    }

    return 0;
}
