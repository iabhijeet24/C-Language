// WAP to swap values of variable without using the third variable.
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of x and y:");
    scanf("%d %d",&x, &y);
    // swapping
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping, x = %d and y = %d\n", x, y);

    return 0;
}