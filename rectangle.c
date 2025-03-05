#include <stdio.h>
int main() {
    int l, b, perimeter, area;
    printf("Enter the value of length and breath:");
    scanf("%d %d", &l, &b);
    
    area = l*b;
    perimeter = 2*(l+b);
    
    printf("The area of rectangle is %d and perimeter is %d",area, perimeter);

    return 0;
}