#include <stdio.h>

int main() {
    int i, j, n=3;

    for(i = 0; i <= n; i++) 
    {
        for(j = 0; j <= i; j++) {
            
            if(i==j)
            { printf(" * ");}
            
            else
            {printf("  ");}
            
        }
        printf("\n");
    }

    return 0;
}
