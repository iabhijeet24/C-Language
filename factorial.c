#include <stdio.h>

int main() {
    int n, i, j, fact=1;

printf("Enter the number:");
scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }

printf("The factorial is %d", fact);

    return 0;
